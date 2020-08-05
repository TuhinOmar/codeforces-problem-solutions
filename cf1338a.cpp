#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

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
		int n,x,y,m=0;
		cin>>n>>x;
		for(int i=1;i<n;++i){
			cin>>y;
			if(y<x)m=max(m,x-y);
			x=max(x,y);
		}
		cout<<ceil(log2(m+1))<<endl;
	}

	return 0;
}