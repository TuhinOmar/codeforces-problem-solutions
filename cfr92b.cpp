#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int n,k,z;
int a[100005];

void solve(){
	cin>>n>>k>>z;
	int sum=0,m=0;
	for(int i=0;i<n;++i)cin>>a[i];
	for(int i=0;i<k+1;++i)sum+=a[i];
	for(int i=0;i<k;++i){
		int tot=0;
		for(int j=k;j>max(k-2*z,i+1);--j){
			tot+=a[i+(k-j)%2]-a[j];
			if(j%2!=k%2||j==2+i)m=max(m,tot);
		}
	}
	cout<<sum+m<<endl;
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