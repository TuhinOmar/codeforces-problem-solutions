#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

const int md=998244353;
int fac[200005]={1};

int power(int a,int p){
	int res=1;
	for(;p;p/=2){
		if(p%2)(res*=a)%=md;
		(a*=a)%=md;
	}
	return res;
}


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;++i){
		fac[i]=i*fac[i-1]%md;
	}
	cout<<fac[m]*(power(fac[n-1],md-2)*power(fac[m-n+1],md-2)%md)%md*(n-2)%md*power(2,n-3)%md;

	return 0;
}