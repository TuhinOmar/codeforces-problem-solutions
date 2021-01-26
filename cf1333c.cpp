#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

ll n,k,sum=0,pos=0,ans=0;
map<ll,ll>m;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	m[0]=1;
	for(ll i=1;i<=n;++i){
		cin>>k;
		sum+=k;
		pos=max(pos,m[sum]);
		ans+=i-pos;
		m[sum]=i+1;
	}
	cout<<ans;
	
	return 0;
}