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
		int n,x,l=0;
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>x;
			if(x==0){
				printf("%c",97+l%26);
				++l;
			}
			for(int j=97;j<97+x%26;++j){
				printf("%c",j+l);
				l=0;
			}
			printf("\n");
		}
		for(int i=97;i<=97+x%26;++i){
			printf("%c",i+l);
			l=0;
		}
		printf("\n");
	}
	return 0;
}