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
		string s;
		cin>>n>>m>>s;
		map<char,int>mp;
		vector<int> v(n,0);
		for(int i=0;i<m;i++){
			int q;
			cin>>q;
			v[q-1]++;
		}
		int ans=0;
		for(int i=s.size()-1;i>-1;--i){
			ans+=v[i];
			mp[s[i]]+=ans+1;
		}
		for(char c='a';c<='z';++c){
			cout<<mp[c]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}