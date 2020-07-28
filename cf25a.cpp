#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,a,en=0,on=0,i;
	std::vector<int> even;
	std::vector<int> odd;
	cin>>n;
	for (i =1; i <=n; ++i)
	{
		cin>>a;
		if(a%2)
		{
			on++;
			odd.push_back(i);
		}else{
			en++;
			even.push_back(i);
		}
		if((en>=2&&on>=1)||(en>=1&&on>=2))
		{
			break;
		}
	}
	even.size()>odd.size()?cout<<odd[0]:cout<<even[0];
	return 0;
}