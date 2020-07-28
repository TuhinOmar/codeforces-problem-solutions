#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	if(n&1){
		cout<<"YES"<<endl;
		for(int i=0;i<n;++i){
			cout<<(2*i+1+(i&1))<<" ";
		}
		for(int i=0;i<n;++i){
			cout<<(2*i+2-(i&1))<<" ";
		}
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}