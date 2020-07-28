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
	vector<int>b(n);
	for(auto&i:a)cin>>i;
	for(auto&i:b)cin>>i;
	vector<int>c(n);
	for(int i=0;i<n;++i){
		c[i]=a[i]-b[i];
	}
	sort(c.begin(),c.end());

	ll ans=0;
	for(int i=0;i<n;++i){
		if(c[i]<=0)continue;
		int pos=lower_bound(c.begin(),c.end(),-c[i]+1)-c.begin();
		//out(pos);
		ans+=i-pos;
	}
	cout<<ans;

	return 0;
}