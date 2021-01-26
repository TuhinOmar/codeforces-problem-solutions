#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int a[101][101];
vector<int>ans[101];
int n,m;

vector<int>get(int u){
	vector<pair<int,int>>d;
	vector<int>q;
	int s=0;
	for(int i=0;i<m;++i){
		d.push_back(make_pair(a[i][n-1]-a[i][u],i));
		s+=a[i][u]-a[i][n-1];
	}
	sort(d.begin(),d.end(),greater<pair<int,int>>());
	for(int i=0;i<n&&s<0;++i){
		q.push_back(d[i].second);
		s+=d[i].first;
	}
	return q;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n-1;++i){
		ans[i]=get(i);
	}
	vector<int>answer=ans[0];
	for(int i=1;i<n-1;++i){
		if(ans[i].size()<answer.size()){
			answer=ans[i];
		}
	}
	cout<<answer.size()<<endl;
	for(int c:answer)cout<<c+1<<" ";

	return 0;
}