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
		int n,m;
		cin>>n>>m;
		string s[n];
		for(int i=0;i<n;++i){
			cin>>s[i];
		}
		int ans=0;
		for(int i=0;i<n;++i){
			if(s[i][m-1]=='R')++ans;
		}
		for(int i=0;i<m;++i){
			if(s[n-1][i]=='D')++ans;
		}
		cout<<ans<<endl;
	}

	return 0;
}