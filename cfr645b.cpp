#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		ll existing=1;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for (int i = n-1; i >= 0; --i)
		{
			if (a[i]<=i+1)
			{
				existing=i+2;
				break;
			}
		}
		cout<<existing<<endl;
	}

	
	return 0;
}