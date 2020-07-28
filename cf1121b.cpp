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
	cin>>n;
	vector<int>s(200000);
	vector<int>a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
		for(int j=0;j<i;++j){
			++s[a[j]+a[i]-1];
		}
	}
	int ans=0;
	for(int i=0;i<s.size();++i){
		ans=max(ans,s[i]);
	}
	cout<<ans;
	return 0;
}