#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

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
		int n,k;
		cin>>n>>k;
		int a[n],b[k];
		for(auto&i:a)cin>>i;
		for(auto&i:b)cin>>i;
		sort(a,a+n);
		sort(b,b+k);
		ll ans=0;
		int l=n-k-1,r=n-1;
		for(auto&i:b){
			ans+=a[r--];
			if(i==1)ans+=a[r+1];
			else{
				l-=i-2;
				ans+=a[l--];
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}