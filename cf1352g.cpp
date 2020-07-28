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
		if(n<4){
			cout<<-1<<endl;
			continue;
		}
		for(int i=n;i>=1;--i){
			if(i&1)cout<<i<<" ";
		}
		cout<<4<<" "<<2<<" ";
		for(int i=6;i<=n;i+=2){
			cout<<i<<" ";
		}
		cout<<endl;
	}

	return 0;
}