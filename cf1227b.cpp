#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int a[100005];
int c[100005];

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	set<int>b;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;++i){
			b.insert(i);
			cin>>a[i];
		}
		int fl=0;
		for(int i=1;i<=n;++i){
			if(a[i]<i){
				cout<<-1<<endl;
				fl=1;
				break;
			}
			if(a[i-1]<a[i]){
				c[i]=a[i];
				b.erase(a[i]);
			}else{
				c[i]=*b.begin();
				b.erase(c[i]);
			}
		}
		if(fl)continue;
		for(int i=1;i<=n;++i){
			cout<<c[i]<<" ";
		}
		cout<<endl;
		b.clear();
	}

	return 0;
}