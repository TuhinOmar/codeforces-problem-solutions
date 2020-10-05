#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int mem[105][105][15][15],n1,n2,k1,k2;

int dp(int a,int b,int c,int d){
	if(a<0||b<0||c<0||d<0) return 0;
	if(a+b==0)return 1;
	if(mem[a][b][c][d]!=-1)return(mem[a][b][c][d]);
	return(mem[a][b][c][d])=(dp(a-1,b,c-1,k2)+dp(a,b-1,k1,d-1))%100000000;
}


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	memset(mem,-1,sizeof(mem));
	cin>>n1>>n2>>k1>>k2;
	cout<<dp(n1,n2,k1,k2)<<endl;

	return 0;
}