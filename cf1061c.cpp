#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int p=1000*1000*1000+7;
int cnt[1001*1001];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;++i)cin>>a[i];
	while(n--){
		for(int i=1;i*i<=a[n];++i){
			if(a[n]%i)continue;
			cnt[i]=(cnt[i]+1+cnt[i+1])%p;
			if(i==a[n]/i)continue;
			cnt[a[n]/i]=(cnt[a[n]/i]+1+cnt[a[n]/i+1])%p;
		}
	}
	cout<<cnt[1];
	
	return 0;
}