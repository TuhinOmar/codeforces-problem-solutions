#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int t,n;
vector<int>e[100010];
bool done;

int dfs(int sn,int fa){
	int a=0,b,c=1;
	for(int fn:e[sn]){
		if(fn==fa)continue;
		int x=dfs(fn,sn);
		if(x>a)a=x,b=fn;
		c+=x;
	}
	if(n-c>a)a=n-c,b=fa;
	if(!done&&a<=n/2){
		int x=0;
		for(int fn:e[b])if(fn!=sn){x=fn;break;}
		if(x)cout<<b<<" "<<x<<endl<<sn<<" "<<x<<endl;
		else cout<<b<<" "<<sn<<endl<<b<<" "<<sn<<endl;
		done=true;
	}
	return c;
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
		cin>>n;
		for(int i=1;i<=n;++i)e[i].clear();
		for(int i=1;i<n;++i){
			int sn,fn;
			cin>>sn>>fn;
			e[sn].push_back(fn);
			e[fn].push_back(sn);
		}
		done=false;dfs(1,0);
	}
	
	return 0;
}