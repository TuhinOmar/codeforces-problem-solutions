#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

using vi=vector<int>;

void solve(){
	int n;
	cin>>n;
	vi v(n);
	for(auto&i:v)cin>>i,--i;
	vector<vi>a(2,vi(n));
	for(int i=0;i<2;++i){
		int mx=0;
		vector<int>cnt(n);
		for(int j=0;j<n;++j){
			mx=max(mx,v[j]);
			++cnt[v[j]];
			if(cnt[v[j]]>1)break;
			if(mx==j)a[i][j]=1;
		}
		reverse(v.begin(),v.end());
	}
	// for(int i=0;i<2;++i){
	// 	for(int j=0;j<n;++j){
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	vi ans;
	for(int i=0;i+1<n;++i){
		if(a[0][i]&&a[1][n-i-2])ans.push_back(i);
	}
	cout<<ans.size()<<endl;
	for(auto&i:ans){
		cout<<i+1<<" "<<n-i-1<<endl;
	}
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
		solve();
	}

	return 0;
}