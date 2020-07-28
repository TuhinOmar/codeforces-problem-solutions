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

	int n,m;
	cin>>n>>m;
	vector<ll>x(n),p(m);
	for(auto&i:x)cin>>i;
	for(auto&i:p)cin>>i;
	ll g=x[1]-x[0];
	for(int i=2;i<n;++i){
		g=__gcd(g,x[i]-x[i-1]);
	}
	for(int i=0;i<m;++i){
		if(g%p[i]==0){
			cout<<"YES"<<endl;
			cout<<x[0]<<" "<<i+1;
			return 0;
		}
	}
	cout<<"NO";

	return 0;
}