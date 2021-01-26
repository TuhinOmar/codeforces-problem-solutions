#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void solve(){
	int n;cin>>n;
	string s;cin>>s;
	vector<int>cnt={1};
	for(int i=1;i<n;++i){
		if(s[i-1]==s[i])++cnt.back();
		else cnt.push_back(1);
	}
	if(cnt.size()%2&&cnt.size()>1){
		cnt.front()+=cnt.back();
		cnt.pop_back();
	}
	if(cnt.size()==1){
		cout<<(cnt.front()+2)/3<<endl;
		return;
	}
	int ans=0;
	for(auto&i:cnt)ans+=i/3;
	cout<<ans<<endl;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;cin>>t;
	while(t--){
		solve();
	}

	return 0;
}