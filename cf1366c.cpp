#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;


void solve(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>>a(n,vector<int>(m));
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>a[i][j];
		}
	}
	vector<vector<int>>cnt(n+m-1,vector<int>(2));
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			++cnt[i+j][a[i][j]];
		}
	}
	int ans=0;
	for(int i=0;i<=n+m-2;++i){
		int j=n+m-2-i;
		if(i<=j)continue;
		ans+=min(cnt[i][0]+cnt[j][0],cnt[i][1]+cnt[j][1]);
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

	int t;
	cin>>t;
	while(t--){
		solve();
	}

	return 0;
}