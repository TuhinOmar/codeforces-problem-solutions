#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n,m;
vector<int>b;

int main(){

	cin>>n;
	vector<int>a(n);
	for(auto&i:a)cin>>i;
	cin>>m;
	vector<int>c(m);
	for(auto&i:c)cin>>i;
	for(int i=1;i<=100;++i){
		bool ok=false;
		for(int j=0;j<a.size();++j){
			for(int k=0;k<c.size();++k){
				if(a[j]+i==c[k]){
					ok=true;
					break;
				}else{
					break;
				}
			}
		}
		if(ok)b.push_back(i);
	}
	for(auto i:b)cout<<i<<" ";


	return 0;
}