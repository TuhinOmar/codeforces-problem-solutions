#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

const int t=1<<17;
int tree[t*2];
int n,m;

void add(int pos,int value){
	pos+=(1<<n);
	tree[pos]=value;
	pos>>=1;
	int cnt=1;
	while(pos){
		if(cnt&1){
			tree[pos]=tree[2*pos]|tree[2*pos+1];
		}else{
			tree[pos]=tree[2*pos]^tree[2*pos+1];
		}
		pos>>=1;
		++cnt;
	}
}


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	for(int i=0;i<(1<<n);++i){
		int temp;
		cin>>temp;
		add(i,temp);
	}
	for(int i=0;i<m;++i){
		int a,b;
		cin>>a>>b;
		add(--a,b);
		cout<<tree[1]<<endl;
	}

	return 0;
}