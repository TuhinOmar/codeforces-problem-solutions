#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)

typedef long long int ll;

constexpr int d=998244353;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll w,h,ans=1;
	cin>>w>>h;
	for(int i=0;i<w+h;++i){
		ans=(2*ans)%d;
	}
	cout<<ans;
	return 0;
}