#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int i,m,q[1024];
string s;

int r(int n,int d){
	for(int&w=q[n]=d+1;n<=m&&w<11;++w){
		if(w!=q[n-1]&&s[w-1]-'0'&&r(n+1,w-d))return 1;
	}
	return n>m;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>s>>m;
	cout<<(r(1,0)?"YES":"NO")<<endl;
	for(;q[m+1]&&i<m;cout<<q[++i]<<" ");

	return 0;
}