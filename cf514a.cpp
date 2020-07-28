#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	string s;
	cin>>s;
	if(s[0]>='5'&&s[0]!='9'){
		s[0]='9'-s[0]+'0';
	}
	for(int i=1;i<s.size();++i){
		if(s[i]>='5'){
			s[i]='9'-s[i]+'0';
		}
	}
	cout<<s<<"\n";
	return 0;
}