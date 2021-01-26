#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int mx=0;
vector<vector<int>>g;
vector<int>used;

void dfs(int v){
	used[v]=1;
	mx=max(mx,v);
	for(auto u:g[v]){
		if(!used[u]){
			dfs(u);
		}
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;cin>>n>>m;
	g.resize(n);
	used.resize(n);
	for(int i=0;i<m;++i){
		int x,y;cin>>x>>y;
		--x,--y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	int ans=0;
	for(int i=0;i<n;++i){
		if(!used[i]){
			if(i<mx)++ans;
			dfs(i);
		}
	}
	cout<<ans;

	return 0;
}