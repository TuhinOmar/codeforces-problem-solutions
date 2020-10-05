#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int
#define inf 1000000009

int n,m,x,y;
char c[1010][1010];
int dp[1010][2],cnt[1010][2];

int dynamic(int col,bool f){
	if(col==0)return 0;
	int&res=dp[col][f];
	if(res!=-1)return res;
	res=inf;
	int cur=0;
	for(int i=col-1;i>=0;--i){
		cur+=cnt[i][f];
		if(col-i>=x&&col-i<=y){
			res=min(res,dynamic(i,!f)+cur);
		}
	}
	return res;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	memset(dp,-1,sizeof(dp));
	cin>>n>>m>>x>>y;
	for(int i=0;i<n;++i)cin>>c[i];
	for(int j=0;j<m;++j){
		for(int i=0;i<n;++i){
			++cnt[j][c[i][j]=='#'];
		}
	}
	cout<<min(dynamic(m,0),dynamic(m,1));


	return 0;
}