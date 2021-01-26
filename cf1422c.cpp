#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

ll mod=1e9+7,ans,db,po=1,n,x;
string s;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>s;
	n=s.size();
	for(int i=0;i<n;++i){
		db+=s[i]-'0';
	}
	for(ll i=n-1;i>=0;--i){
		x=s[i]-'0';
		db-=x;
		ans+=db*(n-i)%mod*po%mod;
		ans+=x*i*(i+1)/2%mod*po%mod, ans%=mod;
		po*=10;
		po%=mod;
	}
	cout<<ans<<endl;
	return 0;
}