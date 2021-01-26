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

	int t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll k=(n-m)/(m+1);
		cout<<(n*(n+1)/2-k*(k+1)*(m+1-(n-m)%(m+1))/2-(k+1)*(k+2)*((n-m)%(m+1))/2)<<endl;
	}
	
	return 0;
}