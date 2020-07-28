#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

const string srp="RSP";

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
		string s;
		cin>>s;
		int occ[3]={0};
		for(auto&i:s){
			++occ[srp.find(i)];
		}
		cout<<string(s.size(),srp[(max_element(occ,occ+3)-occ+2)%3])<<endl;
	}

	return 0;
}