#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

ll n,k;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>k;
	if(k*(k-1)/2+1<n)cout<<-1,exit(0);
	ll beg=0,end=k,mid,a=k*(k-1)/2+1;
	while(beg<end){
		mid=(beg+end)>>1;
		if(a-mid*(mid+1)/2<n)end=mid;
		else beg=mid+1;
	}
	cout<<k-beg;

	return 0;
}