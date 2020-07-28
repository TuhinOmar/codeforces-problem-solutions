#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long int ll;

int f[200010];

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
		int n,k;
		cin>>n>>k;
		int cnt=0;
		for(int i=1;i<=n;++i){
			int a;
			cin>>a;
			if(a&1){
				f[++cnt]=i;
			}
		}
		if(cnt>=k&&(cnt-k+1)&1){
			cout<<"YES"<<endl;
			for(int i=1;i<k;++i){
				cout<<f[i]<<" "; 
			}
			cout<<n<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}