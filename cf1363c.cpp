#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;
const int N=2e5+5;
int n,x;
int deg[N];

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
		memset(deg,0,sizeof(deg));
		cin>>n>>x;
		for(int i=1;i<=n-1;++i){
			int u,v;
			cin>>u>>v;
			++deg[u],++deg[v];
		}
		if(deg[x]<=1){
			cout<<"Ayush"<<endl;
		}else{
			if(n%2){
				cout<<"Ashish"<<endl;
			}else{
				cout<<"Ayush"<<endl;
			}
		}
	}

	return 0;
}