#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int mp[10][10];
int n,m;

int check(){
	int s=10000;
	for(int i=1;i<=6;++i){
		for(int j=i+1;j<=7;++j){
			int temp=0;
			for(int k=1;k<=7;++k){
				if(mp[i][k]&&mp[j][k])++temp;
			}
			s=min(s,temp);
		}
	}
	return m-s;
}

int rup(){
	cin>>n>>m;
	for(int i=1;i<=m;++i){
		int x,y;
		cin>>x>>y;
		mp[x][y]=mp[y][x]=1;
	}
	if(n<7)return m;
	else return check();
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cout<<rup();
	
	return 0;
}