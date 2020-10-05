#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

void solve(){
	int n=0,x=0,bal=0;
	string s="";
	cin>>n>>x>>s;
	int nOne=0;
	for(int i=0;i<s.size();++i){
		nOne+=1-2*(s[i]=='1');
	}
	int ans=0;
	for(int i=0;i<s.size();++i){
		if(nOne==0&&bal==x){
			cout<<-1<<endl;
			return;
		}
		if(nOne!=0&&(x-bal)%nOne==0&&(x-bal)/nOne>=0){
			++ans;
		}
		bal+=1-2*(s[i]=='1');
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

	int t=0;
	cin>>t;
	while(t--){
		solve();
	}

	return 0;
}