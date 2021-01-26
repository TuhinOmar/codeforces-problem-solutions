#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int
#define rep(i,l,r) for(int i=l;i<=r;++i)

typedef pair<int,int>pii;
const int maxn=20+1;
int n,ans[maxn][maxn];
map<int,int>c;
priority_queue<pii>heap;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	rep(i,1,n*n){
		int x;cin>>x;
		++c[x];
	}
	for(auto p:c)heap.push({p.second,p.first});
	rep(i,1,n/2)
	rep(j,1,n/2){
		auto p=heap.top();heap.pop();
		ans[i][j]=ans[n+1-i][n+1-j]=ans[n+1-i][j]=ans[i][n+1-j]=p.second;
		p.first-=4;
		heap.push(p);
	}
	if(n%2){
		rep(i,1,n/2){
			auto p=heap.top();heap.pop();
			ans[n/2+1][i]=ans[n/2+1][n+1-i]=p.second;
			p.first-=2;
			heap.push(p);

			p=heap.top();heap.pop();
			ans[i][n/2+1]=ans[n+1-i][n/2+1]=p.second;
			p.first-=2;
			heap.push(p);
		}
		auto p=heap.top();heap.pop();
		ans[n/2+1][n/2+1]=p.second;
		p.first-=1;
		heap.push(p);
	}
	while(!heap.empty()){
		if(heap.top().first<0){
			cout<<"NO";
			exit(0);
		}
		heap.pop();
	}
	cout<<"YES"<<endl;
	rep(i,1,n)
	rep(j,1,n){
		cout<<ans[i][j]<<" ";
		if(j==n)cout<<endl;
	}
	return 0;
}