#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

struct cmp
{
	bool operator()(const pair<int,int>&a,const pair<int,int>&b)const{
		int lena=a.second-a.first+1;
		int lenb=b.second-b.first+1;
		if(lena==lenb)return(a.first<b.first);
		return(lena>lenb);
	}
};

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
		int n;
		cin>>n;
		set<pair<int,int>,cmp>segs;
		vector<int>a(n);
		segs.insert({0,n-1});
		for(int i=1;i<=n;++i){
			pair<int,int>cur=*segs.begin();
			segs.erase(segs.begin());
			int mid=(cur.first+cur.second)/2;
			a[mid]=i;
			if(cur.first<mid){
				segs.insert({cur.first,mid-1});
			}
			if(mid<cur.second){
				segs.insert({mid+1,cur.second});
			}
		}
		for(auto&i:a)cout<<i<<" ";
		cout<<endl;
	}

	return 0;
}