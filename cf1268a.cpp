#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin>>n>>k;
	string a;
	cin>>a;
	string b=a;
	for(int i=k;i<n;++i){
		b[i]=b[i-k];
	}
	if(a>b){
		int j=k-1;
		while(b[j]=='9'){
			b[j--]='0';
		}
		b[j]+=1;
		for(int i=k;i<n;++i){
			b[i]=b[i-k];
		}
	}
	cout<<n<<endl;
	cout<<b;
	
	return 0;
}