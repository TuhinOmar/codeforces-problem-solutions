#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

vector<int>a[100001];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	for(int i=0;i<=2*n;++i){
		int x;
		cin>>x;
		a[x].push_back(i);
	}
	a[0].push_back(0);
	a[0].push_back(0);
	ll ans=0;
	for(int i=1;i<=n;++i){
		ans+=abs(a[i][0]-a[i-1][0]);
		ans+=abs(a[i][1]-a[i-1][1]);
	}
	cout<<ans;

	return 0;
}