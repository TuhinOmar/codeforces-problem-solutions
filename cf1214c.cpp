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

	int n,s=0,m=0;
	cin>>n;
	char a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
		s+=(a[i]=='(')?1:-1;
		if(s<m)m=s;
	}
	if(s==0&&m>-2){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}