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

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(auto&i:v)cin>>i;
		while(v.back()==0)v.pop_back();
		reverse(v.begin(),v.end());
		while(v.back()==0)v.pop_back();
		cout<<count(v.begin(),v.end(),0)<<endl;
	}
	
	return 0;
}