#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n,a[200005];

int solve(){
	map<int,int>best;
	int diff=0,ans=2*n;
	for(int i=2*n;i>=n;--i){
		best[diff]=i-n;
		diff+=2*a[i]-3;
	}
	diff=0;
	for(int i=1;i<=n+1;++i){
		if(best.count(-diff))ans=min(ans,n-i+1+best[-diff]);
		diff+=2*a[i]-3;
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

	int tc;
	cin>>tc;
	while(tc--){
		cin>>n;
		for(int i=1;i<=2*n;++i){
			cin>>a[i];
		}
		cout<<solve()<<endl;
	}

	return 0;
}