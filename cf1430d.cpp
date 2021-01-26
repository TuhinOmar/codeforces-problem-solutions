#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int t,n,dp,kul;
string s;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>t;
	while(t--){
		cin>>n>>s,dp=0,kul=1;
		for(int i=1;i<n;++i){
			if(s[i]!=s[i-1])++kul;
			else dp=min(dp+1,kul);
		}
		cout<<(kul+dp+1)/2<<endl;
	}

	return 0;
}