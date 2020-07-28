#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	cin>>t;
	while(t--){
		int n,k,d;
		cin>>n>>k>>d;
		int a[n];
		map<int,int>m;
		int t=0,r;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(++m[a[i]]==1)++t;
			if(i==d-1)r=t;
			if(i>=d){
				if(--m[a[i-d]]==0)--t;
				r=min(r,t);
			}
		}
		cout<<r<<endl;
	}

	return 0;
}