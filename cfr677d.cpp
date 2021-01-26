#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		vector<pair<int,int>>vp;
		for(auto&i:v)cin>>i;
		int idx=-1;
		for(int i=1;i<n;++i){
			if(v[0]!=v[i]){
				idx=i;
				vp.push_back({1,i+1});
			}
		}
		if(idx==-1){
			cout<<"NO"<<endl;
			continue;
		}
		for(int i=1;i<n;++i){
			if(v[0]==v[i]){
				vp.push_back({idx+1,i+1});
			}
		}
		cout<<"YES"<<endl;
		for(auto [x,y]:vp){
			cout<<x<<" "<<y<<endl;
		}
	}
	
	return 0;
}