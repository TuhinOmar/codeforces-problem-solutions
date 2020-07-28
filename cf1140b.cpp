#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int solve(){
	int n;
	string s;
	cin>>n>>s;
	int ans=n-1;
	for(int i=0;i<n;++i){
		if(s[i]=='>'||s[n-1-i]=='<'){
			ans=min(ans,i);
		}
	}
	return ans;
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
	while(t--){
		cout<<solve()<<endl;
	}

	return 0;
}