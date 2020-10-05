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
		int r,g,b,w;
		cin>>r>>g>>b>>w;
		if((r>0&&g>0&&b>0)&&((r&1)+(g&1)+(b&1)+(w&1))>=2){
			r-=1;
			g-=1;
			b-=1;
			w+=3;
		}
		if(((r&1)+(g&1)+(w&1)+(b&1))>=2){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}

	return 0;
}