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
		set<int>used;
		for(int i=2;i*i<=n;++i){
			if(n%i==0&&!used.count(i)){
				used.insert(i);
				n/=i;
				break;
			}
		}
		for(int i=2;i*i<=n;++i){
			if(n%i==0&&!used.count(i)){
				used.insert(i);
				n/=i;
				break;
			}
		}
		if((used.size()<2)||used.count(n)||n==1){
			cout<<"NO"<<"\n";
		}else{
			cout<<"YES"<<"\n";
			used.insert(n);
			for(auto it:used)cout<<it<<" ";
			cout<<"\n";
		}
	}
	
	return 0;
}