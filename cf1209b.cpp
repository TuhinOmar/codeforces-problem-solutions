#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long int ll;

int a[105];
int b[105];

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int n,ans=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;++i){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<1e5;++i){
		int cnt=0;
		for(int j=0;j<n;++j){
			if(i>=b[j]&&(i-b[j])%a[j]==0){
				s[j]^=1;
			}
			cnt+=(s[j]=='1');
		}
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;

	return 0;
}