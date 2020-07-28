#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int rec(const string&s,char a){
	if(s.size()==1){
		return(s[0]!=a);
	}
	int mid=s.size()/2;
	int cntl=rec(string(s.begin(),s.begin()+mid),a+1);
	cntl+=s.size()/2-count(s.begin()+mid,s.end(),a);
	int cntr=rec(string(s.begin()+mid,s.end()),a+1);
	cntr+=s.size()/2-count(s.begin(),s.begin()+mid,a);
	return(min(cntl,cntr));
}

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
		int n;
		cin>>n;
		string s;
		cin>>s;
		cout<<rec(s,'a')<<endl;
	}


	return 0;
}