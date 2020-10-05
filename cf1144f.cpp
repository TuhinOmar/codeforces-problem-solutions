#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

const int mx=2e5+100;
pair<int,int>e[mx];
int a[mx];
vector<int>g[mx];

bool dfs(int u,int v){
	if(a[u])return(v==a[u]);
	a[u]=v;
	for(auto it:g[u]){
		if(!dfs(it,v^2))return false;
	}
	return true;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;++i){
		cin>>e[i].first>>e[i].second;
		g[e[i].first].push_back(e[i].second);
		g[e[i].second].push_back(e[i].first);
	}
	if(dfs(1,1)){
		cout<<"YES"<<endl;
		for(int i=1;i<=m;++i){
			if(a[e[i].first]==1)cout<<0;
			else cout<<1;
		}
	}else{
		cout<<"NO";
	}

	return 0;
}