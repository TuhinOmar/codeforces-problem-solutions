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

	int t;
	cin>>t;
	while(t--){
		int a,b,q,lcm;
		cin>>a>>b>>q;
		if(b>a)swap(a,b);
		lcm=a*b/__gcd(a,b);
		while(q--){
			int l,r;
			cin>>l>>r;
			cout<<(r-l+1)-((r+1)/lcm*a+min((r+1)%lcm,a)-l/lcm*a-min(l%lcm,a))<<" ";
		}
		cout<<endl;
	}

	return 0;
}