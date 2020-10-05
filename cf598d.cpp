#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n,m,k;
char a[1010][1010];
int ans[101000];
int b[1010][1010];

int f(int x,int y,int c){
	if(a[x][y]=='*')return 1;
	if(b[x][y])return 0;
	b[x][y]=c;
	return f(x+1,y,c)+f(x-1,y,c)+f(x,y+1,c)+f(x,y-1,c);
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;++i)scanf("%s",a[i]+1);
	for(int i=1;i<=k;++i){
		int x,y,now;
		scanf("%d%d",&x,&y);
		if(b[x][y])now=ans[b[x][y]];
		else now=f(x,y,i),ans[i]=now;
		printf("%d\n",now);
	}

	
	return 0;
}