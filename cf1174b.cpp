#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int a[100005];
bool ex[2];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
		ex[a[i]%2]=1;
	}
	if(ex[0]&&ex[1]){
		sort(a,a+n);
	}
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}

	return 0;
}