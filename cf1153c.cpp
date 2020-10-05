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

	int n,a=0,x=0;
	string s;
	cin>>n>>s;

	for(int i=0;i<n;++i){
		if(s[i]=='('){
			++a;
		}
	}
	for(int i=0;i<n;++i){
		if(s[i]=='?'){
			s[i]=a<n/2?++a,'(':')';
		}
		if(s[i]=='(')++x;
		else --x;
		if(x<0||(i==n-1?x!=0:x==0)){
			cout<<":(";
			exit(0);
		}
	}
	cout<<s;

	return 0;
}