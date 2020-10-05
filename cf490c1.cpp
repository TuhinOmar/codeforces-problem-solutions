#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
//#define int long long int

//typedef long long int ll;

int n,a,b,c,p=1,i,d[1<<20];
char m[1<<20];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	gets(m);
	n=strlen(m);
	scanf("%d%d",&a,&b);
	for(i=n-1;i>=0;--i){
		d[i]=((m[i]-'0')*p+d[i+1])%b;
		p=p*10%b;
	}
	for(int i=1;i<n;++i){
		c=(c*10+m[i-1]-'0')%a;
		if(!c&&!d[i]&&m[i]!='0'){
			puts("YES");
			printf("%.*s\n%s",i,m,m+i);
			return 0;
		}
	}
	puts("NO");

	return 0;
}