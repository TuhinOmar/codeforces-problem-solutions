#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s[1111];
	int a[1111];
	int n;
	cin>>n;
	map<string,int>ma,mb;
	for(int i=0;i<n;++i){
		cin>>s[i]>>a[i];
		ma[s[i]]+=a[i];
	}
	int mx=-1e9;
	for(auto&i:ma)mx=max(mx,i.second);
	for(int i=0;i<n;++i){
		mb[s[i]]+=a[i];
		if(ma[s[i]]==mx&&mb[s[i]]>=mx)return cout<<s[i]<<endl,0;
	}

	return 0;
}