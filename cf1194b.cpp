#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

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
		int n,m;
		cin>>n>>m;
		std::vector<string>v(n);
		for(int i=0;i<n;++i){
			cin>>v[i];
		}
		std::vector<int>cntn(n),cntm(m);
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				cntn[i]+=(v[i][j]=='.');
				cntm[j]+=(v[i][j]=='.');
			}
		}
		int ans=m+n;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				ans=min(ans,cntn[i]+cntm[j]-(v[i][j]=='.'));
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}