#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int v[101][101],b[101][101],t,n,m,flag;
char a[101][101];

void dfs(int x,int y){
	if(b[x][y]||v[x][y])return;
	v[x][y]=1;
	if(x>1)dfs(x-1,y);
	if(x<n)dfs(x+1,y);
	if(y>1)dfs(x,y-1);
	if(y<m)dfs(x,y+1);
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d", &n,&m);
		for(i=1;i<=n;++i)scanf("%s",a[i]+1);
		for(i=0;i<=n+1;++i)for(j=0;j<=m+1;++j)b[i][j]=v[i][j]=0;
		for(i=1;i<=n;++i)for(j=1;j<=m;++j){
			if(a[i][j]=='#')b[i][j]=1;
			if(a[i][j]=='B')b[i][j]=b[i-1][j]=b[i+1][j]=b[i][j-1]=b[i][j+1]=1;
		}
		flag=0;
		dfs(n,m);
		for(int i=1;i<=n;++i)for(int j=1;j<=m;++j)if(a[i][j]=='G'&&!v[i][j])flag=1;
		cout<<(!flag?"Yes\n":"No\n");
	}
	
	return 0;
}