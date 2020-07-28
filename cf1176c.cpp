//subsequence experiment
#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	vector<int>p({4,8,15,16,23,42});
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
		a[i]=lower_bound(p.begin(),p.end(),a[i])-p.begin();
	}
	vector<int>seq(6);
	for(int i=0;i<n;++i){
		if(a[i]==0){
			++seq[0];
		}else{
			if(seq[a[i]-1]>0){
				--seq[a[i]-1];
				++seq[a[i]];
			}
		}
	}
	cout<<n-seq[5]*6;

	return 0;
}