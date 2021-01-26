#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

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
		int mx=0;
		for(auto&i:a){
			cin>>i;
			mx=max(mx,i);
		}
		int idx=-1;
		for(int i=0;i<n;++i){
			if(a[i]!=mx)continue;
			if(i>0&&a[i-1]!=mx){idx=i+1;break;}
			if(i<n-1&&a[i+1]!=mx){idx=i+1;break;}
		}
		cout<<idx<<endl;
	}
	
	return 0;
}