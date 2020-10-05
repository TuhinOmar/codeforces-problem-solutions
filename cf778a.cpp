#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

const int N=2e5+10;
int a[N];
int l1,l2;
string s1,s2,s;

bool valid(){
	int top=0;
	for(int i=0;i<l1;++i){
		if(s2[top]==s[i])++top;
	}
	if(top==l2)return 1;
	return 0;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>s1>>s2;
	l1=s1.size(),l2=s2.size();
	for(int i=1;i<=l1;++i)cin>>a[i];
	int l=1,r=l1,ans=0;
	while(l<=r){
		int mid=l+r>>1;
		s=s1;
		for(int i=1;i<=mid;++i)s[a[i]-1]='*';
		if(valid())l=mid+1,ans=mid;
		else r=mid-1;
	}
	cout<<ans;

	return 0;
}