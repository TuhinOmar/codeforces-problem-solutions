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

	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ans=0,x=0,y=0;
		set<pair<int,int>>w;
		for(int i=0;i<s.size();++i){
			int a=x,b=y;
			if(s[i]=='N')++y;
			else if(s[i]=='S')--y;
			else if(s[i]=='E')++x;
			else --x;
			if(w.find({x+a,y+b})==w.end()){
				ans+=5;
				w.insert({x+a,y+b});
			}else ++ans; 
		}
		cout<<ans<<endl;
	}

	return 0;
}