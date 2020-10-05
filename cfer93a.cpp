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
		int n;
		cin>>n;
		vector<int>a(n);
		for(auto&i:a)cin>>i;
		int test=a[0]+a[1];
		bool ok=true;
		for(int i=2;i<n;++i){
			if(test<=a[i]){
				cout<<1<<" "<<2<<" "<<i+1<<endl;
				ok=false;
				break;
			}
		}
		if(ok)cout<<-1<<endl;
	}
	return 0;
}