#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long int ll;

int a[105];
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
		int n,m,k;
		cin>>n>>m>>k;
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		bool ok=true;
		for(int i=1;i<n;++i){
			int curHeight=max(a[i+1]-k,0);
			m+=(a[i]-curHeight);
			if(m<0){
				ok=false;
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