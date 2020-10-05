#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int n,h,r,l;
int me[2000][2000];
int a[2000];

int dp(int d,int w){
	if(d==n)return 0;
	if(me[d][w]>=0)return(me[d][w]);
	int t1,t2,c1,c2;
	t1=(w+a[d]-1)%h;
	t2=(w+a[d])%h;
	c1=c2=0;
	if(t1>=l&&t1<=r)c1=1;
	if(t2>=l&&t2<=r)c2=1;
	c1+=dp(d+1,t1);
	c2+=dp(d+1,t2);
	return me[d][w]=max(c1,c2);
}


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	memset(me,-1,sizeof(me));
	cin>>n>>h>>l>>r;
	for(int i=0;i<n;++i)cin>>a[i];
	cout<<dp(0,0);

	return 0;
}