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
	int n,lowestC,lowestO,ans=0;
	cin>>n;
	vector<int>c(n);
	vector<int>o(n);
	for(auto&i:c)cin>>i;
	for(auto&i:o)cin>>i;
	lowestC=*min_element(c.begin(),c.end());
	lowestO=*min_element(o.begin(),o.end());
	for(int i=0;i<n;++i){
		ans+=max(c[i]-lowestC,o[i]-lowestO);
	}
	return(ans);
}


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}

	return 0;
}