#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

const int N=5e5+10;
int a[N];


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		int x;
		cin>>x;
		a[i]=a[i-1]+x;
	}
	int ans=0,sum=0;
	for(int i=1;i<n;++i){
		if(a[i]*3==2*a[n])ans+=sum;
		if(a[i]*3==a[n])++sum;
	}
	cout<<ans;

	return 0;
}