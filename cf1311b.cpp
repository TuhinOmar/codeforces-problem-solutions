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
		int n,m;
		cin>>n>>m;
		std::vector<int> v1(n);
		for(int&in:v1)cin>>in;
		std::vector<int> v2(n);
		for(int i=0;i<m;++i){
			int q;
			cin>>q;
			v2[q-1]=1;
		}
		for(int i=0;i<n;++i){
			int j=i;
			while(j<n&&v2[j]) ++j;
			sort(v1.begin()+i,v1.begin()+j+1);
			i=j;
		}
		bool ok=true;
		for(int i=0;i<n-1;++i){
			ok&=v1[i]<=v1[i+1];
		}
		cout<<(ok?"YES":"NO")<<"\n";
	}
	
	return 0;
}