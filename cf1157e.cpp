#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int a[200001];
int n;
multiset<int>s;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		int x;
		cin>>x;
		s.insert(x);
	}
	for(int i=1;i<=n;++i){
		auto it=s.lower_bound(n-a[i]);
		if(it==s.end())it=s.begin();
		cout<<(a[i]+*it)%n<<" ";
		s.erase(it);
	}
	return 0;
}