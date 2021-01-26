#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n,m;
bool am[3005][3005];
vector<int>adj[3005];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	for(int i=0,u,v;i<m;++i){
		cin>>u>>v;
		adj[u].push_back(v);
		am[u][v]=1;
	}
	ll tot=0;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(i==j)continue;
			ll cur=0;
			for(int x:adj[i]){
				if(am[x][j])++cur;
			}
			tot+=cur*(cur-1)/2;
		}
	}
	cout<<tot;

	return 0;
}