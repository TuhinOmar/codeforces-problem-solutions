#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n,m,d[100100],a[100100],beg,nd;

bool solve(int pos){
	int sum=0;
	bool made[100100];
	memset(made,0,sizeof(made));
	int r=0;
	for(int i=pos;i>=1;--i){
		if(!made[d[i]]&&d[i]!=0)made[d[i]]=1,++r,sum+=a[d[i]];
		else if(sum>0)--sum;
	}
	if(r!=m||sum!=0)return false;
	return true;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>d[i];
	}
	for(int i=1;i<=m;++i){
		cin>>a[i];
	}
	beg=1,nd=n;
	while(beg<nd){
		int mid=beg+(nd-beg)/2;
		if(solve(mid)){
			nd=mid;
		}else{
			beg=mid+1;
		}
	}
	if(beg==nd&&!solve(nd)){
		cout<<-1,exit(0);
	}
	cout<<nd;
	return 0;
}