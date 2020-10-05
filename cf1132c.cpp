#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int maxn=5e3+17;
int n,q,l[maxn],r[maxn],a[maxn],ps[maxn];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>q;
	for(int i=0;i<q;++i){
		cin>>l[i]>>r[i];
		--l[i];
	}
	int ans=0;
	for(int i=0;i<q;++i){
		memset(a,0,sizeof(a));
		for(int j=0;j<q;++j){
			if(i!=j){
				++a[l[j]],--a[r[j]];
			}
		}
		partial_sum(a,a+n,a);
		int all=0;
		for(int i=0;i<n;++i){
			all+=a[i]>0;
			ps[i+1]=ps[i]+(a[i]==1);
		}
		for(int j=0;j<q;++j){
			if(i!=j){
				ans=max(ans,all-(ps[r[j]]-ps[l[j]]));
			}
		}
	}
	cout<<ans;
	
	return 0;
}