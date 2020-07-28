#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)

typedef long long int ll;

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int t;
	cin>>t;
	while(t--){
	ll n,m;
	cin>>n>>m;
	n=n/m;
	std::vector<int>digits(10);
	forn(i,10){
		digits[i]=((i+1)*m)%10;
	}
	ll sum=0;
	forn(i,n%10)sum+=digits[i];
	cout<<sum+n/10*accumulate(digits.begin(),digits.end(),0LL)<<endl;
}
	return 0;
}