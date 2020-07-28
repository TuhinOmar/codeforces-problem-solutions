#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int n,q;
vector<vector<int>>lava;

void input(){
	cin>>n>>q;
	lava.resize(2,vector<int>(n,0));
}

void solve(){
	int blockedPair=0;
	while(q--){
	int x,y;
	cin>>x>>y;--x;--y;
	int delta=(lava[x][y]==0)?+1:-1;
	lava[x][y]=1-lava[x][y];
	for(int dy=-1;dy<=1;++dy){
		if(y+dy<0||y+dy>=n)continue;
		if(lava[1-x][y+dy]==1)blockedPair+=delta;
	}
	if(blockedPair==0)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	input();
	solve();

	return 0;
}