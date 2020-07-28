#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

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
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		std::vector<int>v;
		v.push_back(-k-1);
		for(int i=0;i<=n-1;++i){
			if(s[i]=='1'){
				v.push_back(i);
			}
		}
		v.push_back(n+k);
		ll d=0;
		for(int i=0;i<=(v.size()-2);++i){
			d+=(v[i+1]-v[i])/(k+1)-1;
		}
		cout<<d<<endl;
	}

	return 0;
}