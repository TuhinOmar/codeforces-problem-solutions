#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;
const int mod=1e9+7;
int n,m,ans=1,x,i,j,top,q[30];

int pow_mod(int x,int n){
	int res=1;
	while(n){
		if(n&1)res=res*x%mod;
		x=x*x%mod;
		n>>=1;
	}
	return res;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>x>>n;
	for(i=2;i*i<=x;++i){
		if(x%i==0){
			q[++top]=i;
			while(x%i==0){
				x/=i;
			}
		}
	}
	if(x!=1)q[++top]=x;
	for(i=1;i<=top;++i){
		for(m=n;m;m/=q[i]){
			ans=ans*pow_mod(q[i],m/q[i])%mod;
		}
	}
	cout<<ans;

	return 0;
}