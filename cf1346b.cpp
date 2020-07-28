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

	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		string s;
		cin>>n>>a>>b>>s;
		int ans=0;
		int prev=0;
		(s[0]=='1')?ans+=a,prev=a:0;
		for(int i=1;i<s.size();++i){
			if(s[i]=='1'&&s[i-1]=='1'){
				prev=b-prev;
				ans+=prev;
			}else if(s[i]=='1'&&s[i-1]=='0'){
				ans+=a;
				prev=a;
			}
		}
		cout<<ans<<endl;	
	}

	return 0;
}