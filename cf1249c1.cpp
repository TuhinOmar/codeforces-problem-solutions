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
		int n;
		cin>>n;
		while(true){
			bool ok=true;
			int current=n;
			while(current>0){
				if(ok&&current%3==2){
					ok=false;
				}
				current/=3;
			}
			if(ok){
				break;
			}
			++n;
		}
		cout<<n<<endl;
	}

	return 0;
}