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

	ll u,v;
	cin>>u>>v;
	if(u>v){cout<<-1<<endl;return 0;}
	if(v==0){cout<<0<<endl;return 0;}
	v-=u;
	if(v==0){cout<<1<<endl<<u;return 0;}
	if(v%2){cout<<-1<<endl;return 0;}
	v>>=1;
	if(v&u){cout<<3<<endl<<v<<" "<<v<<" "<<u<<endl;return 0;}
	else {cout<<2<<endl<<u+v<<" "<<v<<endl;return 0;}

	return 0;
}