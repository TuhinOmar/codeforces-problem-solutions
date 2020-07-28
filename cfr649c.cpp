#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int n,k,a[100010],b[100010];
bool ex[100010];

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	memset(b,-1,sizeof(b));
	for(int i=1;i<=n;++i){
		if(a[i]!=a[i-1]){
			b[i]=a[i-1];
			ex[b[i]]=1;
		}
	}
	ex[a[n]]=1;
	k=0;
	for(int i=1;i<=n;++i){
		while(ex[k]){
			++k;
		}
		if(b[i]==-1){
			b[i]=k;
			ex[k]=1;
		}
		cout<<b[i]<<" ";
	}

	return 0;
}