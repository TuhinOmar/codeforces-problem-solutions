#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int t,n,a,ans;
int s[2],mx[2];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	for(cin>>t;t;t--){
		mx[1]=0,mx[0]=ans=-1e18;
		s[0]=s[1]=0;
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>a;
			s[i&1]+=a;
			mx[i&1]=max(mx[i&1],s[0]-s[1]);
			ans=max(ans,s[1]-s[0]+mx[i&1]);
		}
		cout<<ans+s[0]<<endl;
	}

	return 0;
}