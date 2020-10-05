#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int n,m,d,s,x;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m>>d;
	vector<vector<int>>v(m+1);
	for(int i=1;i<=m;++i){
		cin>>x;
		s+=x;
		while(x--){
			v[i].push_back(i);
		}
	}
	if(s+(m+1)*(d-1)<n) return cout<<"NO",0;
	cout<<"YES"<<endl;
	n-=s;
	for(auto&w:v){
		x=min(d-1,n);
		n-=x;
		while(x--){
			w.push_back(0);
		}
	}
	for(auto&w:v){
		for(auto&i:w){
			cout<<i<<" ";
		}
	}

	return 0;
}