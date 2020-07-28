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
		int n,s;
		cin>>n>>s;
		int a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		bool flag=true;
		for(int i=0;i<n;++i){
			s-=a[i];
			if(s<0){
				cout<<max_element(a,a+i+1)-a+1<<endl;
				flag=false;
				break;
			}
		}
		if(flag)cout<<0<<endl;
	}
	
	return 0;
}