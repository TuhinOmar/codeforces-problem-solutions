#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int N=2e5+5;
int t,n,x[N];
int dp[N][205];

void solve(){
	int ans=1;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>x[i];
		for(int j=1;j<=200;++j){
			dp[i][j]=dp[i-1][j];
		}
		++dp[i][x[i]];
	}
	for(int i=1;i<=n;++i){
		int now=x[i],j,mx=0,cnt=0;
		for(j=n;j>i;--j){
			if(x[i]==x[j])++cnt;
			if(cnt==dp[i][now])break;
		}
		if(cnt!=dp[i][now])continue;
		for(int k=1;k<=200;++k){
			mx=max(mx,dp[j-1][k]-dp[i][k]);
		}
		ans=max(ans,mx+dp[i][now]*2);
	}
	cout<<ans<<endl;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>t;
	while(t--)solve();
	
	return 0;
}