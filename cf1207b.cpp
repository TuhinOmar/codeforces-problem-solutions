#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long int ll;

int const mxn=55;
int n,m,a[mxn][mxn],b[mxn][mxn];
std::vector<pair<int,int>>ans;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n-1;++i){
		for(int j=0;j<m-1;++j){
			if(a[i][j]&&a[i+1][j]&&a[i][j+1]&&a[i+1][j+1]){
				ans.push_back({i,j});
				b[i][j]=b[i+1][j]=b[i][j+1]=b[i+1][j+1]=1;
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(a[i][j]!=b[i][j]){
				return cout<<-1,0;
			}
		}
	}
	cout<<ans.size()<<endl;
	for(auto i:ans)cout<<i.first+1<<" "<<i.second+1<<endl;
	return 0;
}