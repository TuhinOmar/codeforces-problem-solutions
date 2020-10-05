#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

string s;
int dp[30][30],a[30];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int ans=0;
	cin>>s;
	for(int i=0;i<s.size();++i){
		for(int j=0;j<26;++j){
			dp[j][s[i]-'a']+=a[j];
			ans=max(ans,dp[j][s[i]-'a']);
		}
		++a[s[i]-'a'];
		ans=max(ans,a[s[i]-'a']);
	}
	cout<<ans<<endl;
	return 0;
}