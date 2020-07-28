#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long int ll;

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
		string s;
		cin>>n;
		cin>>s;
		bool ok=true;
		for(int i=1;i<n;++i){
			if(s[i]<s[i-1]){
				ok=false;
				break;
			}
		}
		if(ok){
			cout<<s<<endl;
			continue;
		}
		string ans;
		for(int i=0;i<n;++i){
			if(s[i]=='1')break;
			ans.push_back('0');
		}
		ans.push_back('0');
		for(int i=s.size()-1;i>=0;--i){
			if(s[i]=='0')break;
			ans.push_back('1');
		}
		cout<<ans<<endl;
	}

	return 0;
}