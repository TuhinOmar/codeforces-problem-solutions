#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)

typedef long long int ll;

vector<pair<char,int>> split(string s){
	char c=s[0];
	int cnt=1;
	vector<pair<char,int>>ans;
	auto ss=s.c_str();
	for(int i=1;i<=s.length();++i){
		if(ss[i]!=c){
			ans.push_back({c,cnt});
			c=s[i];
			cnt=1;
		}else{
			++cnt;
		}
	}
	return ans;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	forn(tt,n){
		string s,t;
		cin>>s>>t;
		auto sa(split(s)),ta(split(t));
		bool ok=(sa.size()==ta.size());
		if(ok){
			forn(i,sa.size()){
				if((sa[i].first!=ta[i].first)||(sa[i].second>ta[i].second)){
					ok=false;
				}
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}