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
		int d,mod;
		ll ans=1;
		cin>>d>>mod;
		for(int i=0;(1<<i)<=d;++i){
			ans=(ans*(min(d+1,(1<<(i+1)))-(1<<i)+1))%mod;
		}
		cout<<(ans-1+mod)%mod<<endl;
	}

	return 0;
}