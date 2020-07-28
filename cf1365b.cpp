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
		int n;
		cin>>n;
		int a[n];
		int b[n];
		bool sorted=1;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(i>=1&&a[i]<a[i-1]){
				sorted=0;
			}
		}
		int have0=0,have1=0;
		for(int i=0;i<n;++i){
			int c;
			cin>>b[i];
			!b[i]?++have0:++have1;
		}
		if(sorted){
			cout<<"Yes"<<"\n";
		}else if(have1&&have0){
			cout<<"Yes"<<"\n";
		}else{
			cout<<"No"<<"\n";
		}
	}
	
	return 0;
}