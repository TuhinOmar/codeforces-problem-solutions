#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int n,b;
	int a[]={0,0};
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		cin>>b;
		if (a[b%2]==0)
		{
			a[b%2]=i;
		}else{
			a[b%2]=-1;
		}
	}
	cout<<max(a[0],a[1]);

	return 0;
}