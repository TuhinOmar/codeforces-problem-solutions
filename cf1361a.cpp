#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int N=5e5+10;
int n,m,num[N];
vector<int>g[N],to[N],ans;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	for(int i=1,u,v;i<=m;++i){
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i=1,t;i<=n;++i){
		cin>>t;num[i]=1;
		to[t].push_back(i);
	}
	for(int i=1;i<=n;++i){
		for(int j:to[i]){
			if(num[j]!=i){
				cout<<-1;
				return 0;
			}
			ans.push_back(j);
			for(int v:g[j]){
				if(num[v]==i){
					num[v]=i+1;
				}
			}
		}
	}
	for(int v:ans)cout<<v<<" ";

	return 0;
}