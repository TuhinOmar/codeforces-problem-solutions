#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		cout<<((n*m)/2+((n*m)%2))<<endl;
	}

	
	return 0;
}