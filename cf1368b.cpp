#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int n=10;
int k,cnt[12],temp=1;
string cf="codeforces";

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>k;
	fill_n(cnt,10,1);
	//for(int i=0;i<n;++i)cnt[i]=1;
	int idx=0;
	while(temp<k){
		temp/=cnt[idx];
		++cnt[idx];
		temp*=cnt[idx];
		++idx;
		idx%=10;
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<cnt[i];++j){
			cout<<cf[i];
		}
	}
	cout<<endl;

	return 0;
}