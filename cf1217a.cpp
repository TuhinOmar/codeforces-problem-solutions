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
	int t;
	cin>>t;
	while(t--){
		int s,i,e;
		cin>>s>>i>>e;
		int t=(s+e-i+1)/2;
		cout<<min(e+1,max(t,0))<<endl;
	}

	return 0;
}