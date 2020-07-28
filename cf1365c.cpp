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

	int n,ans=0;
	cin>>n;
	int a[n],b[n]{};
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		a[x]=i;
	}
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		ans=max(ans,++b[(a[x]-i+n)%n]);
	}
	cout<<ans;

	return 0;
}