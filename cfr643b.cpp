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
		int n;
		cin>>n;
		int cnt2=0,cnt3=0;
		while(n%2==0){
			n/=2;
			++cnt2;
		}
		while(n%3==0){
			n/=3;
			++cnt3;
		}
		if(n==1&&cnt2<=cnt3){
			cout<<2*cnt3-cnt2<<endl;
		}else{
			cout<<-1<<endl;
		}
	}

	return 0;
}