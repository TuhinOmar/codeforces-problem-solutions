#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int n,a[100010];
	cin>>n;
	for(int i=0;i<n;++i)cin>>a[i];
	int l=is_sorted_until(a,a+n)-a;
	int r=is_sorted_until(a+l,a+n,greater<int>())-a;
	reverse(a+l-1,a+r);
	if(is_sorted(a,a+n)){
		cout<<"yes\n"<<l<<' '<<r<<'\n';
	}else{
		cout<<"no\n";
	}
	return 0;
}