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
	while(t--){
		int n;
		cin>>n;
		std::vector<int>a(4*n);
		for(auto&i:a)cin>>i;
		sort(a.begin(),a.end());
		int area=a[0]*a.back();
		bool ok=true;
		for(int i=0;i<n;++i){
			int left=2*i;
			int right=4*n-(2*i)-1;
			if(a[left]!=a[left+1]||a[right]!=a[right-1]||a[left]*a[right]!=area){
				ok=false;
				break; 
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}