#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int MansX=2e5+9;
ll n,s,c,ans=0;
priority_queue<int>q;
pair<int,int>p[MansX];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i=0;i<n;++i)cin>>p[i].first;
	for(int i=0;i<n;++i)cin>>p[i].second;
	sort(p,p+n);
	p[n]={2e9,0};
	for(int i=0;i<=n;++i){
		c=p[i].first-(i?p[i-1].first:0);
		while(!q.empty()&&c){
			s-=q.top(),ans+=s,q.pop(),c--;
		}
		q.push(p[i].second),s+=p[i].second;
	}
	cout<<ans;
	
	return 0;
}