#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n,x,dist[200002],hatz[200002],vis[200002],ans;
vector<int>g[200002];

void dfs(int n,int p,int d){
	dist[n]=d;
	hatz[n]=1;
	for(auto it:g[n]){
		if(p!=it){
			dfs(it,n,d+1);
			hatz[n]=max(hatz[n],hatz[it]+1);
		}
	}
}

void dfs2(int x,int d){
	if(vis[x])return;
	if(dist[x]<=d)return;
	ans=max(ans,dist[x]);
	vis[x]=1;
	for(auto it:g[x]){
		dfs2(it,d+1);
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>x;
	for(int i=0;i<n-1;++i){
		int x,y;cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1,0,0);
	dfs2(x,0);
	cout<<ans*2;
	
	return 0;
}