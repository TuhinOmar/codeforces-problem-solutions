#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

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
		string s,t;
		cin>>s>>t;
		int a{1},i{},j{};
		vector<vector<int>>F(26);

		for(auto&c:s){
			F[c-'a'].push_back(++i);
		}
		for(auto&c:t){
			auto&f=F[c-'a'];
			auto it=lower_bound(f.begin(),f.end(),j);
			if(it==f.end()){
				++a;
				it=lower_bound(f.begin(),f.end(),0);
				if(it==f.end()){
					a=-1;
					break;
				}
			}
			j=(*it)+1;
		}
		cout<<a<<endl;
	}

	return 0;
}