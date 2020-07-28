#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int t,n,p,k,ans;
int a[200020];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>t;
	while(t--){
		ans=0;
		cin>>n>>p>>k;
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		for(int i=1;i<=n;++i){
			a[i]+=i<k?a[i-1]:a[i-k];
		}
		for(int i=0;i<=n;++i){
			if(a[i]<=p){
				ans=i;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}