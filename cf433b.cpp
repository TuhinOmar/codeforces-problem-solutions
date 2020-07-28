#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long int ll;
const int maxn=100010;

int n,m;
ll y[maxn],z[maxn];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	cin>>n;
	for(int i=1;i<=n;++i){
		int a;
		cin>>a;
		y[i]=z[i]=a;
	}
	sort(y+1,y+1+n);
	for(int i=1;i<=n;++i){
		y[i]+=y[i-1];
		z[i]+=z[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;++i){
		int t,l,r;
		cin>>t>>l>>r;
		if(t==1){
			cout<<z[r]-z[l-1]<<endl;
		}else{
			cout<<y[r]-y[l-1]<<endl;
		}
	}

	return 0;
}