#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

const int N=200005;
int h,n,d[N];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>h>>n;
	for(int i=0;i<n;++i){
		cin>>d[i];
		d[i]+=d[i-1];
		if(-d[i]>=h){
			return cout<<++i,0;
		}
	}
	if(d[n-1]>=0){
		return cout<<-1,0;
	}
	int ans=h*n;
	for(int i=0;i<n;++i){
		ans=min(ans,(h+d[i]-d[n-1]-1)/-d[n-1]*n+i+1);
	}
	cout<<ans;

	return 0;
}