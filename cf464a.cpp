#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
//#define int long long int

//typedef long long int ll;

const int N=2e5+10;

int n,p;
char s[N],ans[N];

bool func(int pos=0,bool flg=true){
	if(pos==n)return !flg;
	for(char c=flg?s[pos]:'a';c<='z'&&c-'a'<p;++c){
		ans[pos]=c;
		if(pos>=1&&ans[pos-1]==ans[pos])continue;
		if(pos>=2&&ans[pos-2]==ans[pos])continue;
		if(func(pos+1,flg&s[pos]==ans[pos]))return true;
	}
	return false;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>p>>s;
	if(!func())cout<<"NO";
	else cout<<ans;

	return 0;
}