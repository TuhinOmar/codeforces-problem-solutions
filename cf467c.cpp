#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int n,m,k,sum[5001],dp[5001][5001];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m>>k;
	for(int i=1;i<=n;++i){
		cin>>sum[i],sum[i]+=sum[i-1];
	}
	for(int i=1;i<=k;++i){
		for(int j=m;j<=n;++j){
			dp[i][j]=max(dp[i][j-1],dp[i-1][j-m]+sum[j]-sum[j-m]);
		}
	}
	cout<<dp[k][n];

	return 0;
}