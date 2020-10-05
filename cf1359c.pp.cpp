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

	int tc,h,c,t;
	cin>>tc;
	while(tc--){
		cin>>h>>c>>t;
		if(h+c>=2*t)cout<<2<<endl;
		else{
			int k=(t-h)/(h+c-2*t);
			if(fabs(1.0*((h+c-2*t)*k+h-t)/(2*k+1))>fabs(1.0*((h+c-2*t)*(k+1)+h-t)/(2*k+3)))++k;
			cout<<2*k+1<<endl;
		}
	}

	return 0;
}