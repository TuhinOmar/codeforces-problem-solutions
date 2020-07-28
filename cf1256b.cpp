#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

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
		int n,i,j;
		cin>>n;
		int a[n],swp[n]={0};
		for(i=0;i<n;++i){
			cin>>a[i];
		}
		for(i=n-2;i>=0;--i){
			for(j=i;j<n-1;++j){
				if(a[j]>a[j+1]&&swp[j]==0){
					swap(a[j],a[j+1]);
					swp[j]=1;
				}
			}
		}
		for(i=0;i<n;++i){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}