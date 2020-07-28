#include<bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	cin>>t;
	while(t--){
		int a,b,c,d,ans;
		cin>>a>>b;
		c=min(a,b);
		d=max(a,b);
		(2*c>=d)?ans=4*c*c:ans=d*d;
		cout<<ans<<endl;
	}
	
	return 0;
}