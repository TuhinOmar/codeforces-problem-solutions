#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int maxn=2e3+10;
const int mod=998244353;
ll a[maxn]={0,2},b[maxn]={0,0,2};

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k;cin>>n>>k;
	for(int h=2;h<=n;++h){
		for(int i=k;i>=2;--i){
			a[i]=(a[i]+a[i-1]+2*b[i])%mod;
			b[i]=(b[i]+2*a[i-1]+b[i-2])%mod;
		}
	}
	cout<<(a[k]+b[k])%mod<<endl;

	return 0;
}