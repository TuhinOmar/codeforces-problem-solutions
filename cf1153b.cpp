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

	int n,m,h;
	cin>>n>>m>>h;
	vector<int>mh(m);
	vector<int>nh(n);
	for(auto&i:mh)cin>>i;
	for(auto&i:nh)cin>>i;
	int a;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>a;
			if(a)cout<<min(nh[i],mh[j])<<" ";
			else cout<<0<<" ";
		}
		cout<<endl;
	}


	return 0;
}