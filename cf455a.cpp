#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int n,a[1000005],b;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i=0;i<n;++i){
		cin>>b;
		a[b]+=b;
	}
	a[0]=0;
	for(int i=2;i<=100000;++i){
		a[i]=max(a[i-1],a[i]+a[i-2]);
	}
	cout<<a[100000];
	return 0;
}