#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int s=1e7+5;
int c[s],a[s],p[s];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m,t,l,r,i;
	cin>>n;
	for(i=0;i<n;++i){
		cin>>t;
		++c[t];
	}
	for(i=2;i<s;++i){
		a[i]=a[i-1];
		if(p[i])continue;
		a[i]+=c[i];
		for(int j=i+i;j<s;j+=i){
			p[j]=1;
			a[i]+=c[j];
		}
	}
	cin>>m;
	while(m--){
		cin>>l>>r;
		cout<<(a[min(r,s-1)]-a[min(l-1,s-1)])<<endl;
	}
	
	return 0;
}