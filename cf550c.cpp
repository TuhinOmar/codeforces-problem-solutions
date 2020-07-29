#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;
	s="00"+s;
	int l=s.size();
	for(int i=0;i<l;++i){
		for(int j=i+1;j<l;++j){
			for(int k=j+1;k<l;++k){
				int z=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0')*1;
				if(z%8==0){
					cout<<"YES"<<endl<<z<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"NO"<<endl;

	return 0;
}