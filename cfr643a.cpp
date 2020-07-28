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

	int t;
	cin>>t;
	while(t--){
		int x,y,n;
		int res=0;
		cin>>x>>y>>n;
		if(n%x==y){
			cout<<n<<endl;
		}else if(n%x>y){
			cout<<n-(n%x-y)<<endl;
		}else{
			cout<<n-((n%x)+(x-y))<<endl;
		}
	}

	return 0;
}