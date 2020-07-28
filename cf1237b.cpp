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

	int n;
	cin>>n;
	std::vector<int>a(n);
	std::vector<int>b(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
		--a[i];
	}
	for(int i=0;i<n;++i){
		cin>>b[i];
		--b[i];
	}
	std::vector<int>pos(n);
	for(int i=0;i<n;++i){
		pos[b[i]]=i;
	}
	std::vector<int>c(n);
	for(int i=0;i<n;++i){
		c[i]=pos[a[i]];
	}
	int mx=-1,ans=0;
	for(int i=0;i<n;++i){
		if(c[i]>mx){
			mx=c[i];
		}else{
			++ans;
		}
	}
	cout<<ans;

	return 0;
}