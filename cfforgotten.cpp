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
		int n,k,o=0,e=0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			(a&1?o:e)++;
		}
		cout<<(!o||(!e&&~k&1)||(k==n&&~o&1)?"NO\n":"YES\n");
	}
	return 0;
}