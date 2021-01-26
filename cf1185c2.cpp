#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;cin>>n>>m;
	vector<int>a(101);
	for(int i=0;i<n;++i){
		int t;cin>>t;
		int s=t,cnt=0;
		for(int j=1;j<101;++j){
			int z=min(a[j],(m-s)/j);
			s+=z*j;
			cnt+=z;
		}
		cout<<(i-cnt)<<" ";
		++a[t];
	}

	return 0;
}