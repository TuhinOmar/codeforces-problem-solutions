#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n;
vector<ll>v,a,b,c,ans;
ll aa,ab,ac,sum=0;

void check(vector<ll>&d,ll ad){
	sort(d.begin(),d.end());
	for(int i=1;i<d.size();++i){
		if(d[i]-d[i-1]!=d[1]-d[0])return;
	}
	ans.push_back(ad);
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	if(n==1){
		cout<<-1;
		return 0;
	}
	for(int i=1;i<=n;++i){
		int x;cin>>x;v.push_back(x);
		sum+=x;
	}
	sort(v.begin(),v.end());
	a=v;b=v;c=v;
	ll s=v.front();
	ll t=v.back();
	sum=1LL*(t+s)*(n+1)/2-sum;
	aa=sum;
	a.push_back(aa);
	ab=s+(t-s)/(n-1)*n;
	b.push_back(ab);
	ac=t-(t-s)/(n-1)*n;
	c.push_back(ac);
	check(a,aa);
	check(b,ab);
	check(c,ac);
	sort(ans.begin(),ans.end());
	ans.erase(unique(ans.begin(),ans.end()),ans.end());
	cout<<ans.size()<<endl;
	for(int cur:ans)cout<<cur<<" ";

	
	return 0;
}