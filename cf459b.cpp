#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll f[200009];
map<ll,ll>mp;
ll n;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	cin>>n;
	for(ll i=0;i<n;++i)cin>>f[i],mp[f[i]]++;
	sort(f,f+n);
	cout<<f[n-1]-f[0]<<" ";
	if(f[n-1]-f[0]!=0)cout<<mp[f[0]]*mp[f[n-1]]<<"\n";
	else{
		cout<<mp[f[0]]*(mp[f[0]]-1)/2<<"\n";
	}
	return 0;
}