#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n,b[7005],i,j;
ll ans,a[7005];
bool v[7005];
map<ll,int>m;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	for(i=1;i<=n;++i){
		cin>>a[i];
		++m[a[i]];
	}
	for(i=1;i<=n;++i)cin>>b[i];
	for(i=1;i<=n;++i){
		if(m[a[i]]>1){
			ans+=b[i];
			v[i]=1;
		}
	}
	for(i=1;i<=n;++i)if(m[a[i]]==1)for(j=1;j<=n;++j)if((a[i]&a[j])==a[i]&&v[j]){
		ans+=b[i];
		break;
	}
	cout<<ans;

	return 0;
}