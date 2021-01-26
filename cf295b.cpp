#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

ll n,d[1000][1000],x[1000],ans[1000];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i=1;i<=n;++i)for(int j=1;j<=n;++j)cin>>d[i][j];
	for(int i=1;i<=n;++i)cin>>x[i];
	for(int k=n;k>=1;--k){
		for(int i=1;i<=n;++i)for(int j=1;j<=n;++j)d[i][j]=min(d[i][j],d[i][x[k]]+d[x[k]][j]);
		for(int i=k;i<=n;++i)for(int j=k;j<=n;++j)ans[k]+=d[x[i]][x[j]];
	}
	for(int i=1;i<=n;++i){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}