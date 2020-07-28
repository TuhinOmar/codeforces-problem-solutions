#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	for (int&element:v)
	{
		cin>>element;
	}
	sort(v.begin(),v.end());
	for (int i=n-1;i>=0;--i)
	{
		if (v[i]<=i+1)
		{
			cout<<i+2<<endl;
			return;
		}
	}
	cout<<1<<endl;
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	
	return 0;
}