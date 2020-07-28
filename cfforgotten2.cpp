#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int f[10];
string s;
int n;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	cin>>s;
	string ans;
	for(int i=1;i<=9;++i){
		cin>>f[i];
	}
	for(int i=0;i<n;++i){
		if(f[s[i]-'0']>s[i]-'0'){
			s[i]=char(f[s[i]-'0']+'0');
		}
	}
	cout<<s;

	return 0;
}