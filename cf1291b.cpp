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
		int n;
		cin>>n;
		std::vector<int> v(n);
		for(int i=0;i<n;++i){
			cin>>v[i];
		}
		int prefixEnd,suffixEnd;
		for(int i=0;i<n;++i){
			if(v[i]<i){
				break;
			}
			prefixEnd=i;
		}
		for(int i=n-1;i>=0;--i){
			if(v[i]<(n-1)-i){
				break;
			}
			suffixEnd=i;
		}
		if(suffixEnd<=prefixEnd){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	
	return 0;
}