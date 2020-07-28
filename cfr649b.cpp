#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int p[100010];

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
		for(int i=1;i<=n;++i){
			cin>>p[i];
		}
		vector<int>ans;
		for(int i=1;i<=n;++i){
			if(i==1||i==n||(p[i-1]<p[i])!=(p[i]<p[i+1])){
				ans.push_back(p[i]);
			}
		}
		cout<<ans.size()<<endl;
		for(int i:ans) cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}