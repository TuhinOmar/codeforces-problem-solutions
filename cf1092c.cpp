#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int n;
vector<string>v;
string ans;

bool check(const string &pref,const string &suff){
	string s=pref+suff.substr(n-2);
	multiset<string>vv,sPref,sSuff;
	for(int i=0;i<n-1;++i){
		sPref.insert(s.substr(0,n-1-i));
		vv.insert(s.substr(0,n-1-i));
		sSuff.insert(s.substr(1+i));
		vv.insert(s.substr(1+i));
	}
	if(vv==multiset<string>(v.begin(),v.end())){
		for(int i=0;i<2*n-2;++i){
			if(sPref.count(v[i])){
				ans+="P";
				sPref.erase(sPref.find(v[i]));
			}else if(sSuff.count(v[i])){
				ans+="S";
				sSuff.erase(sSuff.find(v[i]));
			}else{
				assert(false);
			}
		}
		return true;
	}
	return false;
}

int32_t main()
{
IOS;
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	
	cin>>n;
	v=vector<string>(2*n-2);
	vector<string>big;
	for(int i=0;i<2*n-2;++i){
		cin>>v[i];
		if(v[i].size()==n-1){
			big.push_back(v[i]);
		}
	}
	if(check(big[0],big[1])){
		cout<<ans;
	}else{
		check(big[1],big[0]);
		cout<<ans;
	}

	return 0;
}