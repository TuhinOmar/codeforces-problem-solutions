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
		string s;
		cin>>s;
		s+='0';
		vector<int>a;
		int oneN=0;
		for(int i=0;i<s.size();++i){
			if(s[i]=='1'){
				++oneN;
			}
			if((s[i]=='0')&&oneN>0){
				a.push_back(oneN);
				oneN=0;
			}
		}
		sort(a.rbegin(),a.rend());
		int ans=0;
		for(int i=0;i<a.size();i+=2){
			ans+=a[i];
		}
		//vet(a);
		cout<<ans<<endl;
	}
	return 0;
}