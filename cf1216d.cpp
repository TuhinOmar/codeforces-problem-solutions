#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	ll n,x=0,s=0,y,z=0;
	cin>>n;
	std::vector<ll>a(n);
	for(int i=0;i<n;++i){
		cin>>a[i],x=max(x,a[i]);
	}
	for(int i=0;i<n;++i){
		y=x-a[i],s+=y,z=__gcd(z,y);
	}
	cout<<s/z<<" "<<z;

	return 0;
}