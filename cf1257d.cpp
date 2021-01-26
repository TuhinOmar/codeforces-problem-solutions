#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int N=22e4;
int a[N],t[N];

int cal(int n){
	int ans=1;
	for(int i=0,l=-1,mx=0;i<n;++i){
		mx=max(mx,a[i]);
		if(t[i-l]<mx)l=i-1,++ans,mx=a[i];
		if(t[1]<a[i])return -1;
	}
	return ans;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int T,n,m;
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>a[i];
			t[i+1]=0;
		}
		cin>>m;
		for(int i=0,x,y;i<m;++i){
			cin>>x>>y;
			t[y]=max(t[y],x);
		}
		for(int i=n-1;i>0;--i){
			t[i]=max(t[i+1],t[i]);
		}
		cout<<cal(n)<<endl;
	}

	return 0;
}