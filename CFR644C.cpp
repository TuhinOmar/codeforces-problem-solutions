#include<bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	cin>>t;
	while(t--){
		std::vector<int> even;
		std::vector<int> odd;
		int n,in;
		cin>>n;
		int sit=n/2;
		for (int i = 0; i < n; ++i)
		{
			cin>>in;
			if (in%2==0)
			{
				even.push_back(in);
			}
			else
			{
				odd.push_back(in);
			}
		}
		sit-=(even.size()/2+odd.size()/2);
		if (even.size()%2!=0||odd.size()%2!=0)
		{
			for (int i = 0; i < even.size(); ++i)
			{
				for (int j = 0; j < odd.size(); ++j)
				{
					if (abs(even[i]-odd[j])==1)
					{
						sit--;
						break;
					}
				}
				if (sit==0)
				{
					break;
				}
			}
		}
		(sit==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}