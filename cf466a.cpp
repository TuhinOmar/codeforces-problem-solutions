#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int n,m,a,b;
	cin>>n>>m>>a>>b;
	cout<<min(n*a,n/m*b+min((n%m)*a,b));
	
	return 0;
}