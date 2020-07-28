#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int t,n;
std::vector<int> v;

void solve(){
	int n;
	cin>>n;
	v.resize(n);
	for(auto&i:v)cin>>i;
	bool flag=false;
	for(int i=0;i+1<n;++i){
		if(abs(v[i+1]-v[i])>1){
			cout<<"YES"<<endl;
			cout<<i+1<<" "<<i+1+1<<endl;
			flag=true;
			break;
		}
	}
	if(!flag)cout<<"NO"<<endl;
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