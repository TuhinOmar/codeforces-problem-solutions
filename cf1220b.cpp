#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	ll n,a[1001][1001],g;
	cin>>n;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}
	g=sqrt((a[0][1]*a[0][2])/a[1][2]);
	cout<<g<<" ";
	for(int i=1;i<n;++i){
		cout<<(a[0][i]/g)<<" ";
	}
	return 0;
}