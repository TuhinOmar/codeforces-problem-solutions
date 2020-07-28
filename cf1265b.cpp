#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int t,n,a,mn,mx;
std::vector<int> v;

void solve(){
	cin>>n;
	v.resize(n);
	for(int i=0;i<n;++i){
		cin>>a;
		v[a-1]=i;
	}
	mn=n-1;
	mx=0;
	for(int i=0;i<n;++i){
		mn=min(mn,v[i]);
		mx=max(mx,v[i]);
		cout<<(mx-mn==i);
	}
	cout<<endl;
}

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	cin>>t;
	while(t--){
		solve();
	}

	return 0;
}