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
		int n;
		cin>>n;
		string s[n];
		for(auto&i:s)cin>>i;
		int ans=0;
		map<string,int>m;
		for(auto&i:s){
			++m[i];
		}
		for(int i=0;i<n;++i){
			if(m[s[i]]>1){
				--m[s[i]];
				++ans;
				for(int j=0;j<10;++j){
					s[i][0]='0'+j;
					if(!m[s[i]]){
						m[s[i]]=1;
						break;
					}
				}
			}
		}
		cout<<ans<<endl;
		for(auto&i:s){
			cout<<i<<endl;
		}
	}
	return 0;
}