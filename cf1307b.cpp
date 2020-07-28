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
		int n,x;
		cin>>n>>x;
		int fmax=0;
		set<int>fav;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			fav.insert(a);
			fmax=max(fmax,a);
		}
		if(fav.count(x)){
			cout<<1<<endl;
		}else{
			cout<<max(2,(fmax+x-1)/fmax)<<endl;
		}
		fav.clear();
	}
	return 0;
}