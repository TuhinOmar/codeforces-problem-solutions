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

	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout<<(j&1?j*n+i+1:j*n+n-i)<<(j==n-1?'\n':' ');
		}
	}

	return 0;
}