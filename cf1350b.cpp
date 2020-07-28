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
		int n;
		int ans=0;
		cin>>n;
		vector<int>a(n);
		vector<int>b(n);
		for(int i=1;i<=n;++i){
			cin>>a[i];
			b[i]=1;
		}
		for(int i=1;i<=n;++i){
			for(int j=2*i;j<=n;j+=i){
				if(a[j]>a[i]){
					b[j]=max(b[j],b[i]+1);
				}
			}
			ans=max(ans,b[i]);
		}
		cout<<ans<<endl;
	}

	return 0;
}