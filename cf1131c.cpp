#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	deque<int>c;
	vector<int>a(n);
	for(auto&i:a)cin>>i;
	sort(a.rbegin(),a.rend());
	for(int i=0;i<n/2;++i){
		c.push_front(a[0]);
		c.push_back(a[1]);
		a.erase(a.begin(),a.begin()+2);
	}
	if(n%2==1){
		c.push_front(a[0]);
	}
	for(auto&i:c)cout<<i<<" ";

	return 0;
}