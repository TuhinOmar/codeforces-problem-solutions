#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int test(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int d[k+k+1];memset(d,0,sizeof(d));d[0]=n;
	for(int i=0;i<n/2;++i){
		--d[min(a[i],a[n-1-i])+1];
		--d[a[i]+a[n-1-i]];
		++d[a[i]+a[n-1-i]+1];
		++d[max(a[i],a[n-1-i])+k+1];
	}
	int m=d[0];
	for(int i=1;i<=k+k;++i){
		d[i]+=d[i-1];
		m=min(m,d[i]);
	}
	return m;
}

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
		cout<<test()<<endl;
	}
	
	return 0;
}