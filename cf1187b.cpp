#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)

typedef long long int ll;

int n,m;
string s,t;
std::vector<int>v[26];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>s;
	forn(i,n){
		v[s[i]-'a'].push_back(i+1);
	}
	cin>>m;
	forn(i,m){
		cin>>t;
		std::vector<int>cnt(26);
		for(auto&c:t){
			++cnt[c-'a'];
		}
		int ans=-1;
		forn(j,26){
			if(cnt[j]>0){
				ans=max(ans,v[j][cnt[j]-1]);
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}