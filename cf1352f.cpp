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
		int n0,n1,n2;
		cin>>n0>>n1>>n2;
		if(n1==0){
			if(n0!=0){
				cout<<string(n0+1,'0')<<endl;
			}else{
				cout<<string(n2+1,'1')<<endl;
			}
			continue;
		}
		string ans;
		for(int i=0;i<n1+1;++i){
			if(i&1)ans+='0';
			else ans+='1';
		}
		ans.insert(1,string(n0,'0'));
		ans.insert(0,string(n2,'1'));
		cout<<ans<<endl;
	}

	return 0;
}