#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

string modified(string&s,int n,int k){
	string result_prefix=s.substr(k-1,n-k+1);
	string result_suffix=s.substr(0,k-1);
	if(n%2==k%2){
		reverse(result_suffix.begin(),result_suffix.end());
	}
	return(result_prefix+result_suffix);
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s,best_s,temp;
	int n,t,best_k;
	cin>>t;
	while(t--){
		cin>>n>>s;
		best_s=modified(s,n,1);
		best_k=1;
		for(int k=2;k<=n;++k){
			temp=modified(s,n,k);
			if(temp<best_s){
				best_s=temp;
				best_k=k;
			}
		}
		cout<<best_s<<endl<<best_k<<endl;
	}
	return 0;
}