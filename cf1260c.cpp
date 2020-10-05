#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
//#define int long long int

//typedef long long int ll;

void test(){
	int r,b,k;
	cin>>r>>b>>k;
	int h=__gcd(r,b);
	r/=h,b/=h;
	if(((r+b-2)/r)>=k||((r+b-2)/b)>=k){
		cout<<"REBEL"<<endl;
	}else{
		cout<<"OBEY"<<endl;
	}
}

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
		test();
	}

	return 0;
}