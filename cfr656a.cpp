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

	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		int biggest=0,lowest=1e9;
		cin>>x>>y>>z;
		biggest=max(max(x,y),z);
		lowest=min(min(x,y),z);
		if((x==y&&z<=x)||(x==z&&y<=x)||(y==z&&x<=y)){
			cout<<"YES"<<endl<<lowest<<" "<<lowest<<" "<<biggest<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}