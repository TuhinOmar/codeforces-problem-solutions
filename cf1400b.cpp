#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int t,n,m,s,w,S,W,ans;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>t;
	while(t--){
		cin>>n>>m>>s>>w>>S>>W;
		ans=0;
		if(S>W)swap(S,W),swap(s,w);
		for(int i=0;i<=s;++i){
			if(i<=n/S){
				int nn=n,mm=m,ret;
				nn-=i*S;
				int ok=min(m/S,s-i);
				ret=i+ok;
				mm-=S*ok;
				ret+=min(w,nn/W+mm/W);
				ans=max(ans,ret);
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}