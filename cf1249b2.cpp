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
		std::vector<int> a(n);
		for(int i=0;i<n;++i){
			cin>>a[i];
			--a[i];
		}
		std::vector<int>used(n);
		std::vector<int>ans(n);
		for(int i=0;i<n;++i){
			if(!used[i]){
				std::vector<int>cur;
				while(!used[i]){
					cur.push_back(i);
					used[i]=true;
					i=a[i];
				}
				for(auto el:cur)ans[el]=cur.size();
			}
		}
		for(auto&elem:ans)cout<<elem<<" ";
		cout<<endl;
	}

	return 0;
}