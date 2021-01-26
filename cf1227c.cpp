#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

char a[2005];
pair<int,int>p[1005];

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
		int n,k,x=0,y=0;
		cin>>n>>k;
		cin>>a+1;
		for(int i=1;i<=n;++i){
			if(a[i]=='('){
				++x;
				if(x==i)continue;
				++y;
				p[y].first=x;
				p[y].second=i;
			}
		}
		cout<<y+k-1<<endl;
		for(int i=1;i<=y;++i)cout<<p[i].first<<" "<<p[i].second<<endl;
		for(int i=1;i<k;++i)cout<<i*2<<" "<<n/2+i<<endl;	
	}

	return 0;
}