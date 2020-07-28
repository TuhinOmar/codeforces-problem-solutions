#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int t,n,a,x,y;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>t;
	while(t--){
		cin>>n;
		while(n--){
			cin>>a;
			x+=a;
			y^=a;
		}
		cout<<2<<endl<<y<<" "<<x+y<<endl;
		x=y=0;
	}

	return 0;
}