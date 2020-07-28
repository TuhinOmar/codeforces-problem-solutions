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

	int n,s;
	cin>>n>>s;
	if(2*n<=s){
		cout<<"YES"<<endl;
		for(int i=0;i<n-1;++i){
			cout<<2<<" ";
			s-=2;
		}
		cout<<s<<endl<<1;
	}else{
		cout<<"NO";
	}

	return 0;
}