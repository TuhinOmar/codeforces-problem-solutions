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

	int t,n,k;cin>>t;
	while(t--){
		cin>>n>>k;
		if(k%3!=0){
			cout<<(n%3?"Alice":"Bob")<<endl;
		}else{
			cout<<((n%(k+1)%3||n%(k+1)==k)?"Alice":"Bob")<<endl;
		}
	}

	return 0;
}