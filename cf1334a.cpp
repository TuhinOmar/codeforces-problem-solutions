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
		bool res=true;
		int n,p=0,c=0;
		cin>>n;
		for(int i=0;i<n;++i){
			int pn,cn;
			cin>>pn>>cn;
			if(pn<p||cn<c||cn-c>pn-p){
				res=false;
			}
			c=cn;
			p=pn;
		}
		res?cout<<"YES":cout<<"NO";
		cout<<"\n";
	}
	return 0;
}