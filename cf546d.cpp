#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
//#define int long long int

//typedef long long int ll;

int a[5555555];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int i,j,k,n;
	for(i=2;i<=5000000;++i){
		if(!a[i]){
			for(j=1;i*j<=5000000;++j){
				for(k=i*j;k%i==0;k/=i){
					++a[i*j];
				}
			}
		}
		a[i]+=a[i-1];
	}
	cin>>n;
	for(i=0;i<n;++i){
		cin>>j>>k;
		cout<<a[j]-a[k]<<endl;
	}

	return 0;
}