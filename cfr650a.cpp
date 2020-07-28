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
		string ans="";
		cin>>s;
		ans+=s[0];
		for(int i=1;i<s.size()-1;i+=2){
			ans+=s[i];
		}
		ans+=s[s.size()-1];
		cout<<ans<<endl;
	}

	return 0;
}