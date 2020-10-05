#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

vector<int>adj[1000000];
int dis[100000],vis[100050];

void bfs(int src){

	queue<int>q;
	q.push(src);
	vis[src]=1;
	dis[src]=0;

	while(!q.empty()){
		int current= q.front();
		q.pop();
		for(int child:adj[current]){
			if(vis[child]==0){
				vis[child]=1;
				q.push(child);
				dis[child]=dis[current]+1;
			}
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

	int t,n,m,x,y;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;++i){
			adj[i].clear();
			vis[i]=0;
		}
		for(int i=0;i<m;++i){
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		bfs(1);
		cout<<dis[n]<<endl;
	}
	
	return 0;
}