#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define f(i,x,n) for(int i=x;i<n;++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long
//#define int long long int

//typedef long long int ll;

const int B=20;
int fr[B];

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	f(i,0,n){
		int t;
		cin>>t;
		f(i,0,B)if(t>>i&1)++fr[i];
	}
	ll ans=0;
	f(i,0,n){
		int t=0;
		f(i,0,B){
			if(fr[i]){
				t|= 1<<i;
				--fr[i];
			}
		}
		ans+=(ll)t*t;
	}
	cout<<ans;

	return 0;
}