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
	cin>>n;
	string s;
	cin>>s;
	int b=0;
	int ans=0;
	for(auto c:s){
		if(c=='(')b++;
		else b--;
		if(b<0)ans++;
		if(b==0&&c=='(') ans++;
	}
	cout<<(b?-1:ans)<<'\n';
	
	return 0;
}