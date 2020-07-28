#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int n,a,b,c,s=1,k;
	cin>>n>>a>>b>>c;
	for (int i = 0; i <=n; ++i)
	{
		for (int j = 0; j <=n; ++j)
		{
			k=n-a*i-b*j;
			if (k>=0&&k%c==0)
			{
				s=max(s,i+j+k/c);
			}
		}
	}
	cout<<s<<'\n';
	return 0;
}