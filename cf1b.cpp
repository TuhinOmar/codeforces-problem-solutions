#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
//#define int long long int

//typedef long long int ll;

char s[64];

void f(int n){
	if(n)
		f((n-1)/26),putchar(65+(n-1)%26);
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,x,y;
	char *p;
	for(scanf("%d ",&n);n--;){
		gets(s);
		if(sscanf(s,"%*c%d%*c%d",&x,&y)==2){
			f(y);
			printf("%d\n",x);
		}else{
			for(x=0,p=s;*p>64;++p)
				x=x*26+*p-64;
			printf("R%sC%d\n",p,x);
		}
	}
	for(long long i=0;1.0*clock()/CLOCKS_PER_SEC<5;++i) int ab;

	return 0;
}