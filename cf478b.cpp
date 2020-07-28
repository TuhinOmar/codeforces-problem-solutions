#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	ll n,m;
	cin>>n>>m;
	ll ans=n/m;
	ll jvs=ans*(ans-1)/2*m;
	ll y= n%m;
	cout<<jvs+ans*y<<" ";
	cout<<(n-m)*(n-m+1)/2<<"\n";
	
	return 0;
}