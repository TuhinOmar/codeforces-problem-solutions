#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int N=200009;
map<int,int>adj[N];
queue<int>s;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	adj[0][1]=adj[1][0]=1;
	for(int i=1;i<n;++i){
		int x,y;
		cin>>x>>y;
		adj[x][y]=1;
		adj[y][x]=1;
	}
	s.push(0);
	for(int i=1;i<=n;++i){
		int temp;
		cin>>temp;
		while(!s.empty()&&!adj[s.front()].count(temp))s.pop();
		if(s.empty()){
			cout<<"NO";
			return 0;
		}
		s.push(temp);
	}
	cout<<"YES";
	
	return 0;
}