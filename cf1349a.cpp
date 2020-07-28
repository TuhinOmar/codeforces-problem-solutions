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

	int n,x,g,lcm,ans=0;
	cin>>n>>x;
	g=x;
	for(int i=1;i<n;++i){
		cin>>x;
		lcm=(g*x)/__gcd(g,x);
		ans=__gcd(ans,lcm);
		g=__gcd(g,x);
	}
	cout<<ans<<endl;
	return 0;
}