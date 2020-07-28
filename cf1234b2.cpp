#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int n,k;
	cin>>n>>k;
	queue<int>q;
	set<int>vals;
	for(int i=0;i<n;++i){
		int id;
		cin>>id;
		if(!vals.count(id)){
			if(q.size()>=k){
				int cur=q.front();
				q.pop();
				vals.erase(cur);
			}
			q.push(id);
			vals.insert(id);
		}
	}
	std::vector<int>ans;
	while(!q.empty()){
		ans.push_back(q.front());
		q.pop();
	}
	reverse(ans.begin(),ans.end());
	cout<<ans.size()<<endl;
	for(auto i:ans)cout<<i<<' ';

	return 0;
}