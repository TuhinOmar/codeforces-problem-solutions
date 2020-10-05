#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int x,y,z;
ll a[100001],b[100001],c[100001];
ll ans=0;

void check(ll* a,ll* b,ll* c,int x,int y,int z){
	for(int i=1;i<=x;++i){
		int p=lower_bound(b+1,b+y+1,a[i]+1)-b-1;
		int q=lower_bound(c+1,c+z+1,a[i])-c;
		if(p==0||q==z+1)continue;
		ans=min(ans,(b[p]-a[i])*(b[p]-a[i])+(a[i]-c[q])*(a[i]-c[q])+(b[p]-c[q])*(b[p]-c[q]));
	}
}

void solve(){
	cin>>x>>y>>z;
	for(int i=1;i<=x;++i)cin>>a[i];
	for(int i=1;i<=y;++i)cin>>b[i];
	for(int i=1;i<=z;++i)cin>>c[i];
	sort(a+1,a+x+1);
	sort(b+1,b+y+1);
	sort(c+1,c+z+1);
	ans=3e18;
	check(a,b,c,x,y,z);
	check(a,c,b,x,z,y);
	check(b,a,c,y,x,z);
	check(b,c,a,y,z,x);
	check(c,a,b,z,x,y);
	check(c,b,a,z,y,x);
	cout<<ans<<endl;
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
		solve();
	}
	
	return 0;
}