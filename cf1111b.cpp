#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k,m;
	cin>>n>>k>>m;
	double a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	double ans=0,s=0;
	for(int i=0;i<n;++i){
		s+=a[n-1-i];
		if(m-n+i+1>=0){
			ans=max(ans,(s+min(m-n+i+1ll,1ll*(i+1)*k))/(double)(i+1));
		}
	}
	cout<<fixed<<setprecision(12)<<ans;
	
	return 0;
}