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

	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	if(a<b-c||n<c){
		cout<<n/a;
	}else{
		n-=c;
		ll ret=n/(b-c);
		n%=(b-c);
		n+=c;
		ret+=n/a;
		cout<<ret;
	}
	return 0;
}