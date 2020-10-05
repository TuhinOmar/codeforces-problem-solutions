#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

#define mod 1000000007
int dp[100005],sum[100005];


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t,k,a,b;
	cin>>t>>k;
	dp[0]=sum[0]=1;
	for(int i=1;i<=100000;++i){
		dp[i]=(dp[i-1]+dp[i-k])%mod;
		sum[i]=(sum[i-1]+dp[i])%mod;
	}
	while(t--){
		cin>>a>>b;
		cout<<((sum[b]-sum[a-1]+mod)%mod)<<endl;
	}
	return 0;
}