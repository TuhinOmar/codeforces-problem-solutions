#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int n;
pair<int,int>a[200005];

void probaj(int i){
	basic_string<int>b;
	for(int j=0;j<n;++j){
		if(j!=i){
			b+=a[j].first;
		}
	}
	for(int i=2;i<n-1;++i){
		if(b[i]-b[i-1]!=b[1]-b[0]){
			return;
		}
	}
	cout<<a[i].second;
	exit(0);
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i].first;
		a[i].second=i+1;
	}
	sort(a,a+n);
	for(int i=1;i<=n;++i){
		if(a[i].first-a[i-1].first!=a[i+1].first-a[i].first){
			probaj(i-1);
			probaj(i);
			probaj(i+1);
			cout<<-1;
			return 0;
		}
	}
	probaj(0);

	return 0;
}