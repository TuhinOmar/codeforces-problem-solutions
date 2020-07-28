#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<9;++i){
			string s;
			cin>>s;
			for(auto&it:s){
				if(it=='2'){
					it='1';
				}
			}
			cout<<s<<"\n";
		}
	}

	
	return 0;
}