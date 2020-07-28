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

	int r,c;
	cin>>r>>c;
	if(r==1&&c==1){
		cout<<0<<endl;
		return 0;
	}
	for(int i=1;i<=r;++i){
		for(int j=1;j<=c;++j){
			cout<<(r<c?i*(r+j):j*(c+i))<<" ";
		}
		cout<<endl;
	}

	return 0;
}