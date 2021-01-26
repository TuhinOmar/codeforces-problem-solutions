#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int num[200005],las[200005],dp[200005]={0},n,ans=0,maxx=0;
map<int,int>mp;

void outt(int x)
{
	if(x==0)return;
	outt(las[x]);
	cout<<x<<" ";
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>num[i];
		dp[i]=dp[mp[num[i]-1]]+1;
		mp[num[i]]=i;
		las[i]=mp[num[i]-1];
		if(dp[i]>ans)
		{
			ans=dp[i];
			maxx=i;
		}
	}
	cout<<ans<<endl;
	outt(maxx);

	
	return 0;
}