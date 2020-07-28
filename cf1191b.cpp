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

	int idx[257]={},c[3][9]={},ans=2;
	idx['m']=1;
	idx['p']=2;
	idx['s']=3;
	for(int i=0;i<3;++i){
		char f[3];
		scanf("%s",f);
		++c[idx[f[1]]-1][f[0]-'1'];
	}
	for(int i=0;i<3;++i){
		for(int j=0;j<9;++j){
			ans=min(ans,3-c[i][j]);
			if(j+2<9){
				ans=min(ans,3-!!c[i][j]-!!c[i][j+1]-!!c[i][j+2]);
			}
		}
	}
	cout<<ans<<endl;

	return 0;
}