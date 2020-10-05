#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int n,w[5010],h[5010];
bool vis[5010];
int f[5010],pre[5010];

void dp(int loc){
	if(vis[loc])return;
	for(int i=0;i<=n;++i){
		if(w[loc]<w[i]&&h[loc]<h[i]){
			dp(i);
			if(f[i]+1>f[loc]){
				f[loc]=f[i]+1;
				pre[loc]=i;
			}
		}
	}
	vis[loc]=true;
}

void print(int cur){
	cout<<cur;
	if(pre[cur]){
		cout<<" ";
		print(pre[cur]);
	}else{
		cout<<endl;
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>w[0]>>h[0];
	for(int i=1;i<=n;++i)cin>>w[i]>>h[i];
	dp(0);
	cout<<f[0]<<endl;
	if(f[0])print(pre[0]);

	return 0;
}