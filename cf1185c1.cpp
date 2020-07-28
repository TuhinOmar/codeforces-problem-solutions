#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long int ll;

int a[105];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<n;++i){
		sort(a,a+i);
		int s=a[i],j=0;
		while(j<i){
			if(s+a[j]>m)break;
			s+=a[j];
			++j;
		}
		if(i==0){
			cout<<(i-j);
		}else{
			cout<<" "<<(i-j);
		}
	}
	cout<<endl;

	return 0;
}