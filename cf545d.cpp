#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int n,test,result;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;++i){
		if(test<=a[i]){
			++result;
			test+=a[i];
		}
	}
	cout<<result<<"\n";
	return 0;
}