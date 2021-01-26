#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int t,n;
string a,b;
vector<int>sol;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>t;
	while(t--){
		cin>>n>>a>>b,sol.clear();
		for(int i=0;i<n;++i){
			if((i%2==0&&a[i/2]==b[n-1-i])||(i%2==1&&a[n-i/2-1]!=b[n-1-i]))sol.push_back(1);
			sol.push_back(n-i);
		}
		cout<<sol.size()<<" ";
		for(int i=0;i<sol.size();++i){
			cout<<sol[i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}