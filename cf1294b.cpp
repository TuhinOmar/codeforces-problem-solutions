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
		vector<pair<int,int>>v(n);
		for(int i=0;i<n;++i){
			cin>>v[i].first>>v[i].second;
		}
		sort(v.begin(),v.end());
		bool ok=true;
		pair<int,int>current=make_pair(0,0);
		string ans;
		for(int i=0;i<n;++i){
			int r=v[i].first-current.first;
			int u=v[i].second-current.second;
			if(r<0||u<0){
				cout<<"NO"<<endl;
				ok=false;
				break;
			}
			ans+=string(r,'R');
			ans+=string(u,'U');
			current=v[i];
		}
		if(ok){
			cout<<"YES"<<endl;
			cout<<ans<<endl;
		}
	}
	
	return 0;
}