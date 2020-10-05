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
	int n,ans=0;
	cin>>n;
	vector<int>a(2*n+1);
	for(int i=0;i<n;++i){
		int temp;
		cin>>temp;
		++a[temp];
	}
	for(int i=2;i<=2*n;++i){
		int sum=0;
		for(int j=1;j*2<=i;++j){
			if(2*j==i){
				sum+=a[j]/2;
			}else{
				sum+=min(a[i-j],a[j]);
			}
		}
		ans=max(ans,sum);
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