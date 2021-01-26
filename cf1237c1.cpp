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

	int n;cin>>n;
	set<tuple<int,int,int,int>>s;
	for(int i=0;i<n;++i){
		int x,y,z;
		cin>>x>>y>>z;
		s.insert({x,y,z,i+1});
	}
	while(!s.empty()){
		auto [x,y,z,i]=*s.begin();
		s.erase(s.begin());
		int cur=INT_MAX;
		int idx=i;
		int a,b,c;
		for(auto [xb,yb,zb,j]:s){
			if(abs(y-yb)+abs(z-zb)<cur){
				cur=abs(y-yb)+abs(z-zb);
				idx=j;
				a=xb,b=yb,c=zb;
			}
		}
		s.erase({a,b,c,idx});
		cout<<i<<" "<<idx<<endl;
	}

	return 0;
}