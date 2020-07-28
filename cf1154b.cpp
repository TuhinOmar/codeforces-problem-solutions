#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	vector<int>a(n);
	for(auto&i:a)cin>>i;
	sort(a.begin(),a.end());
	a.resize(unique(a.begin(),a.end())-a.begin());
	if(a.size()>3){
		cout<<-1;
		return 0;
	}else{
		if(a.size()==1){
			cout<<0;
			return 0;
		}else if(a.size()==2){
			if((a[1]-a[0])%2==0){
				cout<<(a[1]-a[0])/2;
				return 0;
			}else{
				cout<<a[1]-a[0];
				return 0;
			}
		}
		else{
			if(a[1]-a[0]!=a[2]-a[1]){
				cout<<-1;
				return 0;
			}else{
				cout<<a[1]-a[0];
				return 0;
			}
		}
	}

	return 0;
}