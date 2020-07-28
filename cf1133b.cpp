#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int n,k;
int a[105];
int ans=0;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>k;
	for(int i=0;i<n;++i){
		int b;
		cin>>b;
		if(a[(k-b%k)%k]){
			++ans;
			--a[(k-b%k)%k];
		}else{
			++a[b%k];
		}
	}
	cout<<2*ans;

	return 0;
}