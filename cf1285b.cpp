#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int n;
vector<int> v;

bool solve(){
	cin>>n;
	v.resize(n);
	for(int i=0;i<n;++i){
		cin>>v[i];
	}
	ll sum=0;
	for(int i=0;i<n;++i){
		sum+=v[i];
		if(sum<=0)return 0;
	}
	sum=0;
	for(int i=n-1;i>=0;--i){
		sum+=v[i];
		if(sum<=0)return 0;
	}
	return 1;
}

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
		cout<<(solve()?"YES":"NO")<<endl;
	}
	return 0;
}