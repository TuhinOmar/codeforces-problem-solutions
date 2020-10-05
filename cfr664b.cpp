#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

const int a=1000;

//typedef long long int ll;

int n,m,x,y;
int b[a][a];



int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m>>x>>y;
	--x,--y;
	for(int i=0;i<n;++i){
		while(!b[x][y]){
			b[x][y]=1;
			cout<<x+1<<" "<<y+1<<endl;
			++y,y%=m;
		}
		y+=m-1,y%=m;
		++x,x%=n;
	}

	return 0;
}