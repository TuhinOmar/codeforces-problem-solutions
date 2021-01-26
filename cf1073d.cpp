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

	ll n,t,ans=0;
	cin>>n>>t;
	ll a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	while(true)
	{
		ll cnt=0,sum=0;
		for(int i=0;i<n;++i)
		{
			if(sum+a[i]<=t){
				++cnt;
				sum+=a[i];
			}
		}
		if(!cnt)break;
		ans+=(t/sum)*cnt;
		t%=sum;
	}
	cout<<ans;
	
	return 0;
}