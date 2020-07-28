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
		int n,k;
		cin>>n>>k;
		vector<int>a(n);
		for(auto&i:a)cin>>i;
		int mx=0;
		map<int,int>mp;
		for(auto&i:a){
			if(i%k==0)continue;
			++mp[k-i%k];
			mx=max(mx,mp[k-i%k]);
		}
		ll ans=0;
		for(auto[key,value]:mp){
			if(value==mx){
				ans=k*1ll*(value-1)+key+1;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}