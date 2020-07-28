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
		int n;
		cin>>n;
		vector<int>v(n+1);
		int ans=1e9;
		for(int i=1;i<=n;++i){
			int k;
			cin>>k;
			if(v[k]){
				ans=min(ans,i-v[k]+1);
			}
			v[k]=i;
		}
		cout<<(ans<1e9?ans:-1)<<endl;
	}
	return 0;
}