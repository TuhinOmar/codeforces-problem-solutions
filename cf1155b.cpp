#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	string s;
	cin>>n>>s;
	int num=0;
	for(int i=0;i<n-11+1;++i){
		num+=(s[i]-'0'==8);
		if(num>(n-11)/2){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}