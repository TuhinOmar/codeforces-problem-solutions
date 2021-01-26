#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int
#define inf 1000000000000009

ll n,m,w,a[100010],s[100010];

bool check(ll num){
	memset(s,0,sizeof(s));
	ll cur=0,cnt=0;
	for(int i=1;i<=n;++i){
		if(i>w)cur-=s[i-w];
		if(a[i]+cur<num){s[i]=num-(a[i]+cur);cnt+=num-(a[i]+cur);cur+=s[i];}
	}
	return cnt<=m;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m>>w;
	ll mx=inf;
	for(ll i=1;i<=n;++i){
		cin>>a[i];
		mx=min(a[i],mx);
	}
	ll l=mx,r=2000000000,ans=0;
	while(l<=r){
		ll mid=l+(r-l)/2;
		if(check(mid)){
			ans=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout<<ans;
	
	return 0;
}