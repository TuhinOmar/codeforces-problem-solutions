
#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define rep(i,a,n) for(int i=a;i<n;++i)
#define ll long long int

const int N=110;
string s[N];
string ans;
int n,m;

int ok(){
	rep(i,0,n){
		int cnt=0;
		rep(j,0,m){
			cnt+=(ans[j]!=s[i][j]);
		}
		if(cnt>1){return 0;}
	}
	return 1;
}

void solve(){
	cin>>n>>m;
	rep(i,0,n)cin>>s[i];
	ans=s[0];
	rep(i,0,n)
	rep(j,0,m){
		int t=ans[j];
		ans[j]=s[i][j];
		if(ok()){cout<<ans<<endl;return;}
		ans[j]=t;
	}
	cout<<-1<<endl;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int _;
	cin>>_;
	while(_--){
		solve();
	}

	return 0;
}