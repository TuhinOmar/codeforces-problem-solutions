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
		string s;
		cin>>s;
		map<char,int>mp;
		for(int i=0;s[i];++i){
			++mp[s[i]];
		}
		int h=min(mp['L'],mp['R']);
		int v=min(mp['U'],mp['D']);
		!h&&v?v=1:0;
		!v&&h?h=1:0;
		cout<<2*(h+v)<<endl;
		cout<<string(h,'L')+string(v,'U')+string(h,'R')+string(v,'D')<<endl;
	}
	return 0;
}