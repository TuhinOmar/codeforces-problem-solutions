#include<bits/stdc++.h>
using namespace std;

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
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int ans=abs(a[0]-a[1]);
	for (int i = 2; i < n; ++i)
	{
		ans=min(ans,abs(a[i]-a[i-1]));
	}
	cout<<ans<<endl;
}
	return 0;
}