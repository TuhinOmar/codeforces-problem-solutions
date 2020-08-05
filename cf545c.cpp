#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int solve(){
	int n;
	cin>>n;
	vector<pair<int,int>>a(n);
	for(int i=0;i<n;++i){
		int x,y;
		cin>>x>>y;
		a[i].first=x;
		a[i].second=y;
	}
	int result=n>1?2:1;
	for(int i=1;i<n-1;++i){
		if((a[i].first-a[i-1].first)>a[i].second){
			++result;
		}else if((a[i+1].first-a[i].first)>a[i].second){
			++result;
			a[i].first+=a[i].second;
		}
	}
	return(result);
}


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cout<<solve();

	return 0;
}