#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

string s,res;
int n;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n>>s;
	for(int i=0;i<n;++i){
		if(res.size()%2==0||res.back()!=s[i]){
			res.push_back(s[i]);
		}
	}
	if(res.size()%2==1){
		res.pop_back();
	}
	cout<<n-res.size()<<endl<<res;

	return 0;
}