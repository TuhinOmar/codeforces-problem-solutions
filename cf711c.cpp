#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int N=1e2+2;
ll dp[N][N][N], a[N][N];
int n,m,c[N];

ll solve(int ind,int last,int k){
	if(k<0)return 1e12;
	if(ind==n)return(!k?0:1e12);
	ll &ret=dp[ind][last][k];
	if(ret!=-1)return ret;
	if(c[ind])ret=solve(ind+1,c[ind],k-(c[ind]!=last));
	else{
		ret=1e12;
		for(int i=1;i<=m;++i){
			ret=min(ret,solve(ind+1,i,k-(i!=last))+a[ind][i]);
		}
	}
	return ret;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int k;cin>>n>>m>>k;
	for(int i=0;i<n;++i){
		cin>>c[i];
	}
	for(int i=0;i<n;++i){
		for(int j=1;j<=m;++j){
			cin>>a[i][j];
		}
	}
	memset(dp,-1,sizeof(dp));
	if(solve(0,m+1,k)>=1e12)cout<<-1;
	else cout<<solve(0,m+1,k);

	return 0;
}