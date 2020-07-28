#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int a,b,c,d,e=-1,f;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	cin>>a;
	while(a--){
		cin>>b;
		c+=b;
		d+=1-2*b;
		e=max(e,d-f);
		f=min(f,d);
	}
	cout<<c+e;
	
	return 0;
}