#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	cin>>t;
	while(t--){
		int n;
		std::vector<int>even;
		std::vector<int>odd;
		int test=0;
		cin>>n;
		for(int i=0;i<n;++i){
			int el;
			cin>>el;
			if(i%2==0&&el%2!=0){
				++test;
				odd.push_back(el);
			}
			if(i%2!=0&&el%2==0){
				++test;
				even.push_back(el);
			}
		}
		//cout<<test<<even.size()<<odd.size()<<endl;
		if(even.size()==odd.size()){
			cout<<even.size()<<endl;
		}else{
			cout<<-1<<endl;
		}
	}

	return 0;
}