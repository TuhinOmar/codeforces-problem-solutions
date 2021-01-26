#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

string hsh(string s){
	if(s.size()&1)return s;
	string s1=hsh(s.substr(0,s.size()>>1)),s2=hsh(s.substr(s.size()>>1));
	return ((s1<s2)?(s1+s2):(s2+s1));
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s1,s2;
	cin>>s1>>s2;
	if(hsh(s1)==hsh(s2))cout<<"YES";
	else cout<<"NO";

	
	return 0;
}