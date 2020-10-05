#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;



int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	vector<int>a(n);
	for(auto&i:a)cin>>i;
	int left=0,right=n-1;
	while(left<n-1&&a[left]<a[left+1])++left;
	while(right>0&&a[right]<a[right-1])--right;
	int i=0,j=n-1,cur=0;
	string ret;
	while(i<=j){
		if(cur<a[i]&&(a[i]<a[j]||cur>=a[j]||(a[i]==a[j]&&left+right>=i+j)))cur=a[i++],ret+='L';
		else if(cur<a[j])cur=a[j--],ret+='R';
		else break;
	}
	cout<<ret.size()<<endl<<ret;

	return 0;
}