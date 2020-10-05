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
		int n1,n2;
		cin>>n1>>n2;
		if(n1==0||n2==0)throw;
		int b=cbrt(1ll*n1*n2)+0.5;
		if(1ll*b*b*b==1ll*n1*n2&&n1%b==0&&n2%b==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}

	return 0;
}