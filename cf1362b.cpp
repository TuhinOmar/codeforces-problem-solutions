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
		set<int>st1;
		int n,ans=-1;
		cin>>n;
		for(int i=0;i<n;++i){
			int in;
			cin>>in;
			st1.insert(in);
		}
		for(int k=1;k<=1024;++k){
			set<int>st2;
			for(int s:st1)st2.insert(s^k);
			if(st1==st2){
				ans=k;
				break;
			}
		}
		cout<<ans<<'\n';
	}
	
	return 0;
}