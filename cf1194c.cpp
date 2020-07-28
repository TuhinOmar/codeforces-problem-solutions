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

	int t;
	cin>>t;
	stop:
	while(t--){
		string s,t,p;
		cin>>s>>t>>p;
		int arr[205]={0};
		for(auto ch:p)++arr[ch];
		int ind=0,k=0;
		for(auto ch:t){
			if(s[ind]!=ch){
				--arr[ch];
				++k;
			}else{
				++ind;
			}
			if(arr[ch]<0){
				cout<<"NO"<<endl;
				goto stop;
			}
		}
		if(s.size()+k==t.size()){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}