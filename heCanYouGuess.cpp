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

	vector<ll>v(1000000,1);
	ll i,j;
	for(i=2;i<=1000000;++i){
		for(j=2*i;j<=1000000;j+=i){
			v[j]+=i;
		}
	}
	cin>>i;
	while(i--){
		cin>>j;
		cout<<v[j]<<endl;
	}

	return 0;
}