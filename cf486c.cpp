#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

string s;
int n,p,ans;
int l=-1,r=-1;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>p>>s;
	p=(p>n/2?n-p:p-1);
	for(int i=0;i<n/2;++i){
		if(s[i]^s[n-i-1]){
			int x=abs(s[r=i]-s[n-i-1]);
			ans+=min(x,26-x);
			l=(~l?l:i);
		}
	}
	ans+=min(abs(p-l),abs(p-r))+r-l;
	cout<<(~l?ans:0);
	return 0;
}