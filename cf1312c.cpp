#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int a[65];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t,n,k;

	cin>>t;
	while(t--){
		cin>>n>>k;
		memset(a,0,sizeof(a));
		int ok=1;
		for(ll i=1,temp,cnt;i<=n;++i){
			cin>>temp;
			cnt=0;
			while(temp){
				a[cnt]+=temp%k;
				temp/=k;
				if(a[cnt]>=2){
					ok=0;
				}
				++cnt;
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl; 
		}
	}

	return 0;
}