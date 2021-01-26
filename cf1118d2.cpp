#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

ll n,m,a[200005],x;

bool check(int mid){
	x=0;
	for(int i=1;i<=n;++i){
		x+=max(a[i]-(i-1)/mid,0LL);
	}
	return x>=m;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	reverse(a+1,a+1+n);
	ll l=1,r=200005,ans=-1,mid;
	while(l<=r){
		mid=l+(r-l)/2;
		if(check(mid)){ans=mid;r=mid-1;}
		else l=mid+1;
	}
	cout<<ans;
	
	return 0;
}