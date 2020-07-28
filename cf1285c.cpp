#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

ll x;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>x;
	vector<ll>f;
	for(ll i=2;i*i<=x;++i){
		if(x%i==0){
			ll cur=1;
			while(x%i==0){
				x/=i;
				cur*=i;
			}
			f.push_back(cur);
		}
	}
	if(x>1){
		f.push_back(x);
	}
	int n=f.size();
	ll ansa=1e18,ansb=1e18;
	for(int i=0;i<(1<<n);++i){
		ll a=1,b=1;
		for(int j=0;j<n;++j){
			if((i>>j)&1){
				a*=f[j];
			}else{
				b*=f[j];
			}
		}
		if(max(a,b)<max(ansa,ansb)){
			ansa=a;
			ansb=b;
		}
	}
	cout<<ansa<<" "<<ansb;

	return 0;
}