#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int mxn=2e5+10;
vector<int>g[mxn],ans[2];
int n,m,t;
int vis[mxn];

void dfs(int n,int ind){
	vis[n]=1;
	ans[ind].push_back(n);
	for(auto xn:g[n]){
		if(vis[xn])continue;
		dfs(xn,ind^1);
	}
	return;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;++i){
			g[i].clear();
			vis[i]=0;
		}
		ans[0].clear();ans[1].clear();
		for(int i=0;i<m;++i){
			int x,y;cin>>x>>y;
			g[x].push_back(y);
			g[y].push_back(x);
		}
		dfs(1,0);
		if(ans[0].size()>ans[1].size()){
			swap(ans[0],ans[1]);
		}
		cout<<ans[0].size()<<endl;
		for(auto it:ans[0])cout<<it<<" ";
		cout<<endl;
	}

	return 0;
}