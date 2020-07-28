#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)cin>>a[i];
		sort(a,a+n);
		for(int i=0,j=n-1>>1,k=j+1;i<n;++i){
			cout<<(i&1?a[k++]:a[j--])<<" ";
		}
		cout<<"\n";
	}
	return 0;
}