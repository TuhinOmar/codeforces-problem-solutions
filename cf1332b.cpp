#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int n,t;
vector<int>a[1007];
int ans[1007];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	auto f=[&](int u){
		for(int i=2;i<=u;++i){
			if(u%i==0){
				return i;
			}
		}
	};

	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=1000;++i)a[i].clear();
		for(int i=1;i<=n;++i){
			int u;
			cin>>u;
			a[f(u)].push_back(i);
		}
		int num=0;
		for(int i=1;i<=1000;++i){
			if(a[i].size()){
				++num;
				for(auto&elem:a[i]){
					ans[elem]=num;
				}
			}
		}
		cout<<num<<endl;
		for(int i=1;i<=n;++i){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}