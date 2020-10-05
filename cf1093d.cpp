#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int N=3e5+5,M=998244353;
int t,a,b,n,m,v[N],p[N]{1};
vector<int>g[N];

bool dfs(int x){
	if(v[x]==1)++a;++b;
	for(int c:g[x]){
		if(v[c]==v[x])return false;
		if(!v[c]){
			v[c]=-v[x];
			if(!dfs(c))return false;
		}
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

	for(int i=1;i<N;++i)p[i]=p[i-1]*2%M;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;++i){
			g[i].clear();
			v[i]=0;
		}
		while(m--){
			scanf("%d%d",&a,&b);
			g[a].push_back(b);
			g[b].push_back(a);
		}
		ll c=1;
		for(int i=1;i<=n;++i){
			if(!v[i]){
				a=b=0;
				v[i]=1;
				c=c*dfs(i)*(p[a]+p[b-a])%M;
			}
		}
		cout<<c<<endl;
	}
	
	return 0;
}