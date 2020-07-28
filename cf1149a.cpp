#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int a[3];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		int b;
		cin>>b;
		++a[b];
	}
	if(a[2]--)cout<<2<<" ";
	if(a[1]--)cout<<1<<" ";
	while(a[2]-->0)cout<<2<<" ";
	while(a[1]-->0)cout<<1<<" ";

	return 0;
}