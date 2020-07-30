#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int c[10];
string s;

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
		cin>>s;
		int m=0;
		memset(c,0,sizeof(c));
		for(auto&a:s)++c[a-'0'];
		for(auto&a:c)m=max(m,a);
		int res=m;
		for(int i=0;i<10;++i){
			for(int j=0;j<10;++j){
				m=0;
				for(auto&a:s){
					if((a-'0'==i&&!(m%2))||(a-'0')==j&&(m%2)){
						++m;
					}
				}
				if(m&&m%2){
					--m;
				}
				res=max(res,m);
			}
		}
		cout<<s.size()-res<<endl;
	}

	return 0;
}