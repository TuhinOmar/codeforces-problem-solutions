#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

ll t;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>t;
	while(t--){
		string s;cin>>s;ll i,j,x,ans=0,prev_1=-1;
		for(i=0;s[i];++i){
			if(s[i]=='1'){
				for(x=0,j=i;s[j];++j){
					x<<=1;
					x+=s[j]-'0';
					if(x>j-prev_1)break;
					++ans;
				}
				prev_1=i;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}