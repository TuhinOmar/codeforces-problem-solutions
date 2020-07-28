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

	int n,k;
	cin>>n>>k;
	vector<int>alice,bob,both;
	for(int i=0;i<n;++i){
		int t,a,b;
		cin>>t>>a>>b;
		if(!a and b)bob.push_back(t);
		if(a and !b)alice.push_back(t);
		if(a and b)both.push_back(t);
	}
	sort(alice.begin(),alice.end());
	sort(bob.begin(),bob.end());
	for(int i=0;i<min(alice.size(),bob.size());++i){
		both.push_back(alice[i]+bob[i]);
	}
	sort(both.begin(),both.end());
	cout<<(both.size()<k?-1:accumulate(both.begin(),both.begin()+k,0LL));

	return 0;
}