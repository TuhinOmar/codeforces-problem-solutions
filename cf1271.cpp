#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int x[]={-1,1,0,0},y[]={0,0,-1,1};
int cnt[4];

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int n,sx,sy;
	cin>>n>>sx>>sy;
	for(int i=0;i<n;++i){
		int x,y;
		cin>>x>>y;
		if(x<sx)++cnt[0];
		if(x>sx)++cnt[1];
		if(y<sy)++cnt[2];
		if(y>sy)++cnt[3];
	}
	int d=max_element(cnt,cnt+4)-cnt;
	cout<<cnt[d]<<endl;
	cout<<sx+x[d]<<" "<<sy+y[d]<<endl;
	return 0;
}