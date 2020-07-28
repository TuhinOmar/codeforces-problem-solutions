#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	ll g;
	cin>>g;
	for(int i=1;i<n;++i){
		ll a;
		cin>>a;
		g=__gcd(g,a);
	}
	ll ans=0;
	for(int i=1;i*1ll*i<=g;++i){
		if(g%i==0){
			++ans;
			if(i!=g/i){
				++ans;
			}
		}
	}
	cout<<ans;

	return 0;
}