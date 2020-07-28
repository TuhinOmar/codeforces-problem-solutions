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
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<(c-a)*(d-b)+1<<endl;
	}

	
	return 0;
}