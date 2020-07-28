#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

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
		string s;
		cin>>s;
		int suf0=0,suf1=0;
		for(auto&i:s){
			suf0+=(i=='0');
			suf1+=(i=='1');
		}
		int ans=min(suf1,suf0);
		int pref0=0,pref1=0;
		for(auto&i:s){
			pref0+=(i=='0'),suf0-=(i=='0');
			pref1+=(i=='1'),suf1-=(i=='1');
			ans=min(ans,pref1+suf0);
			ans=min(ans,pref0+suf1);
		}
		cout<<ans<<endl;
	}

	return 0;
}