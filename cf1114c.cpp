
#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

ll ppow(ll n,ll p){
	return n<p?0:n/p+ppow(n/p,p);
}

ll ans(ll b,ll n){
	ll answer=(ll)1<<60;
	int k,j;
	for(k=2;(ll)k*k<=b;++k){
		if(b%k)continue;
		for(j=0;b%k==0;b/=k)++j;
		answer=min(answer,ppow(n,k)/j);
	}
	if(b!=1)answer=min(answer,ppow(n,b));
	return answer;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll n,b;cin>>n>>b;
	cout<<ans(b,n)<<endl;

	return 0;
}