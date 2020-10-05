#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int
#define r register int

//typedef long long int ll;

inline void solve(){
	int n,ans=0,sum=0;
	string s;
	cin>>n>>s;
	map<int,int>q;
	q[0]=1;
	for(r i=0;i!=n;++i){
		sum+=s[i]-'1';
		ans+=q[sum];
		++q[sum];
	}
	cout<<ans<<endl;
}


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	for(r i=0;i!=t;++i){
		solve();
	}

	return 0;
}