#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int n;
	string s;
	std::map<string, int> match;
	cin>>n;
	while(n--){
		cin>>s;
		if (match[s]==0)
		{
			cout<<"OK"<<'\n';
		}else{
			cout<<s<<match[s]<<'\n';
		}
		match[s]++;
	}
	return 0;
}