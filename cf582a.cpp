#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int;

vector<int>ans;
multiset<int>SET;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,x;
	cin>>n;
	for(int i=0;i<n*n;++i){
		cin>>x;
		SET.insert(-x);
	}
	while(!SET.empty()){
		int v=*SET.begin();
		SET.erase(SET.find(v));
		for(int x:ans){
			SET.erase(SET.find(-__gcd(-v,x)));
			SET.erase(SET.find(-__gcd(-v,x)));
		}
		ans.push_back(-v);
	}
	for(int x:ans)cout<<x<<" ";
	
	return 0;
}