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
		vector<int>a(n);
		for(auto&i:a)cin>>i;
		sort(a.begin(),a.end());
		int x=0;
		for(int i=n-1;i>=0;--i){
			if((a[i])%k!=0){
				++x;
			}else{
				x+=k-(a[i]+x)%k;
			}
		}
		cout<<x<<endl;
	}

	return 0;
}