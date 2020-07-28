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

	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int f=k%n?2:0;
		string s[n];
		for(int i=0;i<n;++i)s[i]=string(n,'0');
		while(k--){
			int i=k/n,j=k%n;
			++s[j][(i+j)%n];
		}
		cout<<f<<endl;
		for(int i=0;i<n;++i)cout<<s[i]<<endl;
	}

	return 0;
}