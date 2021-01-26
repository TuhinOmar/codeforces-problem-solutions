#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int N=21;
ll f[N];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	f[0]=1;
	for(int i=1;i<N;++i){
		f[i]=f[i-1]*i;
	}
	ll ans=f[n]/f[n/2]/f[n/2];
	ans=ans*f[n/2-1];
	ans=ans*f[n/2-1];
	ans/=2;
	cout<<ans<<endl;
	
	return 0;
}