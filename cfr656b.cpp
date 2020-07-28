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
		int n,temp=0,a;
		cin>>n;
		vector<int>ans(n,0);
		for(int i=0;i<2*n;++i){
			cin>>a;
			if(a!=temp&&!count(ans.begin(),ans.end(),a)){
				cout<<a<<" ";
				ans.push_back(a);
			}
		}
		cout<<endl;
	}

	return 0;
}