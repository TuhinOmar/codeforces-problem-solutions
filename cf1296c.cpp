#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t,n;
	cin>>t;
	string s;
	while(t--){
		cin>>n>>s;
		int x=0,y=0;
		int l=0,r=n+1;
		map<pair<int,int>,int>m;
		m[{0,0}]=1;
		for(int i=0;i<n;++i){
			if(s[i]=='L')--x;
			if(s[i]=='R')++x;
			if(s[i]=='U')++y;
			if(s[i]=='D')--y;
			if(m[{x,y}]){
				if(i-m[{x,y}]<r-l){
					l=m[{x,y}];
					r=i;
				}
			}
			m[{x,y}]=i+2;
		}
		if(l==0)cout<<-1<<endl;
		else cout<<l<<" "<<r+1<<endl;
	}
	return 0;
}