#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n;
string x;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	cin>>x;
	int cnt=0;
	for(int i=0;i<n-3;++i){
		if((x[i]==x[i+2])&&(x[i+1]==x[i+3]))++cnt;
	}
	cout<<cnt<<endl;

	return 0;
}