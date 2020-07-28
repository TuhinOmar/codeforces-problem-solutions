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
	int nl=0,nu=0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (isupper(s[i]))
		{
			nu++;
		}else{
			nl++;
		}
	}
	if (nu>nl)
	{
		transform(s.begin(),s.end(),s.begin(),::toupper);
	}else{
		transform(s.begin(),s.end(),s.begin(),::tolower);
	}
	cout<<s;
	return 0;
}