#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll sum=0,cnt=0;
		for(int i=0;i<s.length();++i){
			if(s[i]=='+'){
				++cnt;
			}else{
				--cnt;
			}
			++sum;
			if(cnt<0){
				sum+=(i+1);
				++cnt;
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}