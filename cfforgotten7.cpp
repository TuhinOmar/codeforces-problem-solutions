#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int;

int n,m,ans,l,r;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	ans=n;
	for(int i=0;i<m;++i){
		cin>>l>>r;
		ans=min(ans,r-l+1);
	}
	cout<<ans<<endl;
	for(int i=0;i<n;++i){
		cout<<i%ans<<" ";
	}
	
	return 0;
}