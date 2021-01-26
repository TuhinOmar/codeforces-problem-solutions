#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n,ans=0;
string s;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>s;
	for(int i=0;i<n;++i){
		ans+=((s[i]=='?')?9:((s[i]-'0')*2))*((i<(n/2))?1:-1);
	}
	cout<<(ans==0?"Bicarp":"Monocarp");

	return 0;
}