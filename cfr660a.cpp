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
		if(n>30){
			if(n-30==6){
				cout<<"YES"<<endl;
				cout<<6<<" "<<10<<" "<<15<<" "<<(n-31)<<endl;
			}else if(n-30==10){
				cout<<"YES"<<endl;
				cout<<6<<" "<<10<<" "<<15<<" "<<(n-31)<<endl;
			}else if(n-30==14){
				cout<<"YES"<<endl;
				cout<<6<<" "<<10<<" "<<15<<" "<<(n-31)<<endl;
			}else{
				cout<<"YES"<<endl;
				cout<<6<<" "<<10<<" "<<14<<" "<<(n-30)<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}