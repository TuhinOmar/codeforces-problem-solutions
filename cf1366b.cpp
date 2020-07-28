#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int t,n,x,m,l,r,a,b;

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	cin>>t;
	while(t--){
		cin>>n>>x>>m;
		l=x;
		r=x;
		for(;m--;){
			cin>>a>>b;
			if(a<=r&&b>=l){
				if(a<l)l=a;
				if(b>r)r=b;
			}
		}
		cout<<r-l+1<<endl;
	}

	return 0;
}