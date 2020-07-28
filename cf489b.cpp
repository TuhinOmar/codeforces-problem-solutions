#include<bits/stdc++.h>
using namespace std;

#define f(n,a) for(int i = 0; i < n; ++i) cin>>a[i];


typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	
	int n,m,c=0;
	cin>>n;
	int a[n];
	f(n,a)
	cin>>m;
	int b[m];
	f(m,b)
	sort(a,a+n);
	sort(b,b+m);
	for (int i=0,j=0;i<n&j<m;)
	{
		if (a[i]-b[j]>1)
		{
			j++;
		}else if(b[j]-a[i]>1){
			i++;
		}else{
			c++;
			i++;
			j++;
		}
	}
	cout<<c;
	
	return 0;
}