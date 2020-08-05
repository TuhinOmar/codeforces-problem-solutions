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

	int n,a,b,k,h;
	cin>>n>>a>>b>>k;
	vector<int>r;
	while(n--){
		cin>>h;
		r.push_back((h+a+b-1)%(a+b)/a);
	}
	sort(r.begin(),r.end());
	for(auto&i:r){
		n+=i<=k;
		k-=i;
	}
	cout<<n+1<<endl;
	return 0;
}