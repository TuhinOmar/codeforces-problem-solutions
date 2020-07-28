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

	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<int>r;
		for(string txt:{"twone","one","two"}){
			for(size_t pos=0;(pos=s.find(txt,pos))!=string::npos;){
				s[pos+txt.length()/2]='?';
				r.push_back(pos+txt.length()/2);
			}
		}
		cout<<r.size()<<endl;
		for(auto&i:r) cout<<i+1<<" ";
		cout<<endl;
	}

	return 0;
}