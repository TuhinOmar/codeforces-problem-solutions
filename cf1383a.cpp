#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void solve(){
	int n;
	string a,b;
	cin>>n>>a>>b;
	int ans=0;
	int cur='a';
	while(a!=b){
		vector<int>v;
		int mn=999;
		for(int i=0;i<n;++i){
			if(a[i]<b[i]&&a[i]==cur){
				v.push_back(i);
				mn=min(mn,(int)b[i]);
			}
		}
		for(int i:v){
			a[i]=mn;
		}
		if(++cur=='w'){
			cout<<-1<<endl;
			return;
		}
		if(!v.empty()){
			++ans;
		}
	}
	cout<<ans<<endl;
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