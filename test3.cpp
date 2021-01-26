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

	vector<int>arr={3,1,2,4};
	auto it1=arr.begin()+1;
	auto it2=arr.end();
	//cout<<it1<<it2<<endl;
	cout<<*(it1+1)<<" "<<*(it2-2)<<endl;
	rotate(arr.begin(),it1,it1+1);
	for(int i=0;i<arr.size();++i){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}