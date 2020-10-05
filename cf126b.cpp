#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

int b[1000005];
string s;

void p(){
	int i=0,j=-1;
	while(i<s.size()){
		while(j>=0&&s[i]!=s[j])j=b[j];
		++i,++j;
		b[i]=j;
	}
}


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	memset(b,-1,sizeof(b));
	cin>>s;
	p();
	int i=b[s.size()];
	while(i!=0){
		for(int j=0;j<s.size();++j){
			if(b[j]==i){
				cout<<s.substr(0,i);
				return 0;
			}
		}
		i=b[i];
	}
	cout<<"Just a legend";

	return 0;
}