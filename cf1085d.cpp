#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

double s,ans;
int n,x,y,i,g[200010];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	scanf("%d%lf",&n,&s);
	for(int i=0;i<n-1;++i){
		scanf("%d%d",&x,&y);
		++g[x],++g[y];
	}
	for(int i=1;i<=n;++i)if(g[i]==1)++ans;
	printf("%.10lf",s/ans*2);
	
	return 0;
}