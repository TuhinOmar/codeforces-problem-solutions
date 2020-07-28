#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int c[100001];
int b;

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
		for(int i=0;i<n;++i){
			int x;
			cin>>x;
			c[x]=i;
		}
		ll ans=0;
		int ed=0;
		for(int i=0;i<m;++i){
			cin>>b;
			if(ed>=c[b]){
				++ans;
			}else{
				ans+=(c[b]-i)*2;
				++ans;
				ed=c[b];
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}