#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int xp,nb,ans=0;
	cin>>xp>>nb;
	for(int i=0;i<=xp;++i){
		int cur=i;
		int leftxp=xp-i;
		int leftnb=nb-2*i;
		if(leftnb>=0){
			cur+=min(leftnb,leftxp/2);
			ans=max(ans,cur);
		}
	}
	cout<<ans;

	return 0;
}