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

	int t;
	cin>>t;
	while(t--){
		int n,x,l=-1,r,sum=0;
		cin>>n>>x;
		for(int i=0;i<n;++i){
			int a;
			cin>>a;
			if(a%x){
				if(l==-1){
					l=i;
				}
				r=i;
			}
			sum+=a;
		}
		if(sum%x){
			cout<<n<<endl;
		}else if(l==-1){
			cout<<-1<<endl;
		}else{
			cout<<n-min(l+1,n-r)<<endl;
		}
	}

	return 0;
}