#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int
#define f(i,n) for(int i=0;i<int(n);++i)

typedef long long int ll;
const int N=100*1000+13;

int t,n,r;
int a[N];

void solve(){
	cin>>n>>r;
	f(i,n)cin>>a[i];
	sort(a,a+n);
	n=unique(a,a+n)-a;
	//cout<<n<<endl;
	int ans=0;
	for(int i=n-1;i>=0;--i){
		ans+=(a[i]-ans*r>0);
	}
	cout<<ans<<endl;
}


int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	cin>>t;
	while(t--){
		solve();
	}

	return 0;
}