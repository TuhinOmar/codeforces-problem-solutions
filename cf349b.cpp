#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int i,n,s=100000000001,l,a[9];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	while(cin>>a[i++])s=min(s,a[i-1]);
	l=n/s;
	if(!l)cout<<-1;
	while(l--){
		for(i=8;i>=0;--i){
			if((n-a[i])/s==l&&n>=a[i]){
				cout<<i+1;
				n-=a[i];
				break;
			}
		}
	}
	return 0;
}