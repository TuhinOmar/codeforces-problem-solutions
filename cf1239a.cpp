#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int
#define mod 1000000007

ll n,m;
ll f[110000]={0,1};

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	for(int i=2;i<110000;++i)f[i]=(f[i-1]+f[i-2])%mod;
	cin>>n>>m;
	cout<<2*(f[n+1]+f[m+1]-1)%mod;	
	return 0;
}