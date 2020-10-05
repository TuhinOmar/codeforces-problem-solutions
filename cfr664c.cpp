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

	int n,m;
	cin>>n>>m;
	vector<int>a(n);
	vector<int>b(m);
	for(auto&i:a)cin>>i;
	for(auto&i:b)cin>>i;
	for(int ans=0;ans<(1<<9);++ans){
		bool ok=true;
		for(auto&x:a){
			bool fd=false;
			for(auto&y:b){
				fd or_eq((ans|(x&y))==ans);
			}
			if(!fd)ok=false;
		}
		if(ok){
			cout<<ans;
			break;
		}
	}
	return 0;
}