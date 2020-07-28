#include<bits/stdc++.h>
using namespace std;

string a,b;
int c,d,e;

int f(int n, int h){
	return n?f(n-1,h+1)+f(n-1,h-1):h==0;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	// c=d=e=0;
	cin>>a>>b;
	for (int i = 0; i < a.length(); ++i)
	{
		if (a[i]=='+')
		{
			c++;
		}
		if (a[i]=='-')
		{
			c--;
		}
		if (b[i]=='+')
		{
			d++;
		}
		if (b[i]=='-')
		{
			d--;
		}
		if (b[i]=='?')
		{
			e++;
		}
	}
	printf("%0.9f",(double)f(e,c-d)/pow(2,e));
	return 0;
}