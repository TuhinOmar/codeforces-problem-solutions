#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m;
	vector<int>dis(n),cnt(n,0);
	while(m--){
		int a,b;
		cin>>a>>b;
		int d=--a<--b?(b-a):(b+n-a);
		dis[a]=cnt[a]++?min(dis[a],d):d;
	}
	for(int i=0;i!=n;++i){
		int res=0;
		for(int j=0;j!=n;++j){
			if(cnt[j]){
				res=max(res,j-i+(j<i?n:0)+(cnt[j]-1)*n+dis[j]);
			}
		}
		cout<<res<<" ";
	}

	
	return 0;
}