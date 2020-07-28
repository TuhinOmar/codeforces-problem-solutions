#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;
	ll a=0,b=0,c=0;
	for(int i=0;i<s.length();++i){
		if(s[i]=='o'){
			b+=a;
		}else if(i>0&&s[i-1]=='v'){
			++a;
			c+=b;
		}
	}
	cout<<c;

	return 0;
}