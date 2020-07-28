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

	int n;
	cin>>n;
	vector<int>a(n);
	for(auto&i:a)cin>>i;
	sort(a.begin(),a.end());
	int ans=-1;
	for(int i=0;i<n;++i){
		int ub=upper_bound(a.begin(),a.end(),a[i]+5)-a.begin()-i;
		ans=max(ans,ub);
	}
	cout<<ans;

	return 0;
}