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

	int n;
	cin>>n;
	cout<<4+3*n<<endl;
	cout<<0<<" "<<0<<endl;
	for(int i=1;i<=n+1;++i){
		cout<<i<<" "<<i<<endl<<i-1<<" "<<i<<endl<<i<<" "<<i-1<<endl;
	}

	return 0;
}