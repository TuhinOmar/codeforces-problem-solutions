#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;


	void solve(){
		ll a;
		cin>>a;
		ll ans=0;
		for(int i=0;i<60;++i){
			if(a&(1ll<<i)){
				ans+=(1ll<<(i+1))-1;
			}
		}
		cout<<ans<<endl;
	}

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
		solve();
	}

	return 0;
}