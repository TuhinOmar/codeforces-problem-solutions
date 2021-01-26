#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int maxn=3e5+100;
int n;
vector<pair<int,int>>ans;
int arr[maxn],pos[maxn];

int find(int x){
	if(2*(n-x)>=n)return n;
	else return 1;
}

void change(int x,int y){
	ans.push_back(make_pair(x,y));
	swap(pos[arr[x]],pos[arr[y]]);
	swap(arr[x],arr[y]);
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>arr[i];
		pos[arr[i]]=i;
	}
	for(int i=2;i<n;++i){
		int t=pos[i];
		change(t,find(t));
		if(find(t)!=find(i))change(find(t),find(i));
		change(i,find(i));
	}
	if(arr[1]!=1)change(1,n);
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();++i){
		cout<<ans[i].first<<" "<<ans[i].second<<endl;
	}
	
	return 0;
}