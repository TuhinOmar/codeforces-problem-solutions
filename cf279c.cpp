#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int n,m,a[100005],l[100005],r[100005],b,c;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		l[i]=1+(a[i]<=a[i-1]?l[i-1]:0);
	}
	for(int i=n;i>=1;--i){
		r[i]=1+(a[i]<=a[i+1]?r[i+1]:0);
	}
	while(m--){
		cin>>b>>c;
		if(r[b]+l[c]>c-b+1){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}

	return 0;
}