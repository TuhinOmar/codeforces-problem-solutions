#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll getAdd(ll x){
	ll m1=10,m2=0;
	while(x>0){
		ll y=x%10;
		x/=10;
		m1=min(m1,y);
		m2=max(m2,y);
	}
	return m1*m2;
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int t;
	cin>>t;
	while(t--){
		ll x,k;
		cin>>x>>k;
		k--;
		while(k--){
			int a=getAdd(x);
			if (a==0)
			{
				break;
			}
			x+=a;
		}
		cout<<x<<'\n';
	}

	return 0;
}