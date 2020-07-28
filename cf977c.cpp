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

	int n,k;
	cin>>n>>k;
	std::vector<int>v(n);
	for(auto&i:v)cin>>i;
	sort(v.begin(),v.end());
	int ans;
	if(k==0){
		ans=v[0]-1;
	}else{
		ans=v[k-1];
	}
	int cnt=0;
	for(int i=0;i<n;++i){
		if(v[i]<=ans){
			++cnt;
		}
	}
	if(cnt!=k||!(1<=ans&&ans<=1000*1000*1000)){
		cout<<"-1"<<endl;
		return 0;
	}
	cout<<ans<<endl;
	return 0;
}