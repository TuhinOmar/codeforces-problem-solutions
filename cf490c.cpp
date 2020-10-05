#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

char s[1000010];
bool b1[1000010];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,a,b,c,d;
	scanf("%s%d%d",s,&a,&b);
	n=strlen(s);c=0;
	for(int i=0;i<n;++i){
		b1[i]=(c=(c*10+s[i]-48)%a)||s[i+1]==48;
	}
	c=0;d=1;
	for(int i=n-1;i;--i,d=10*d%b){
		if(!(c=(c+(s[i]-48)*d)%b)&&!b1[i-1]){
			return printf("YES\n%.*s\n%s",i,s,s+i),0;
		}
	}
	puts("NO");
	return 0;
}