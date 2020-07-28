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
		int n,k,mx=0,l=0;
		cin>>n>>k;
		std::vector<int> v(n),peak(n,0);
		for(auto&it:v)cin>>it;
		for(int i=1;i<n-1;++i){
			if(v[i-1]<v[i]&&v[i+1]<v[i]){
				peak[i]=1;
			}
		}
		for(int i=1;i<n-1;++i){
			peak[i]+=peak[i-1];
		}
		for(int i=n-k;i>=0;--i){
			if(peak[i+k-2]-peak[i]>=mx){
				mx=peak[i+k-2]-peak[i];
				l=i;
			}
		}
		cout<<mx+1<<" "<<l+1<<"\n";
	}
	return 0;
}