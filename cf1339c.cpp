#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

const int maxn=2e5+10;
int t,n,vis[maxn];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>t;
	while(t--){
		cin>>n;
		int num=0,maxx=0;
		for(int i=1;i<=n;++i){
			int x;
			cin>>x;
			maxx=max(maxx,++vis[x]);
		}
		for(int i=1;i<=n;++i){
			if(maxx==vis[i])++num;
			vis[i]=0;
		}
		cout<<(n-maxx*num)/(maxx-1)+num-1<<endl;
	}

	return 0;
}