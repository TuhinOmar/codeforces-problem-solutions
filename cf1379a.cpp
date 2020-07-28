#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

bool count(string s){
	int sum=0;
	for(int i=0;i<s.length()-6;++i){
		if(s.substr(i,7)=="abacaba"){
			++sum;
		}
	}
	return(sum==1);
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
		int n;
		string s;
		cin>>n>>s;
		int ok=0;
		for(int i=0;i<n-6;++i){
			string x=s,st="abacaba";
			for(int j=0;j<7;++j){
				if(x[i+j]==st[j]||x[i+j]=='?'){
					x[i+j]=st[j];
				}
			}
			for(int j=0;j<n;++j){
				if(x[j]=='?'){
					x[j]='z';
				}
			}
			if(count(x)){
				cout<<"YES"<<endl;
				cout<<x<<endl;
				ok=1;
				break;
			}
		}
		if(!ok){
			cout<<"NO"<<endl;
		}
	}
	return 0;
}