#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n,m,a[300050];

bool check(int x){
	int p=0;
	for(int i=0;i<n;++i){
		if((m+p-a[i])%m>x){
			if(a[i]<p)return 0;
			p=a[i];
		}
	}
	return 1;
}


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	for(int i=0;i<n;++i)cin>>a[i];
	int l=0,r=m-1;
	while(l<r){
		int mid=(l+r)/2;
		if(check(mid))r=mid;
		else l=mid+1;
	}
	cout<<l;
	
	return 0;
}