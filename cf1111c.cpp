#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int maxx=1e6+5;
ll n,k,a,b;
ll x[maxx];

ll solve(ll l,ll r){
	ll m=l+(r-l+1)/2;
	ll sum=upper_bound(x,x+k,r)-lower_bound(x,x+k,l);
	if(sum==0)return a;
	else{
		ll ans=b*sum*(r-l+1);
		if(r-l>=1)ans=min(ans,solve(l,m-1)+solve(m,r));
		return ans;
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>k>>a>>b;
	for(int i=0;i<k;++i){
		cin>>x[i];
	}
	sort(x,x+k);
	cout<<solve(1,1<<n);
	
	return 0;
}