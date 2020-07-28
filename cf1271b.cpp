#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int n,cnt,a[205],t[205],b,w;
string s;

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	cin>>n>>s;
	for(int i=0;i<n;++i){
		if(s[i]=='B')t[i]=0,b++;
		else t[i]=1,w++;
	}
	if(b%2&&w%2){
		cout<<-1<<endl;
		return 0;
	}
	b=b%2?0:1;
	for(int i=0;i<n-1;++i){
		if(t[i]^b){
			t[i]^=1;
			t[i+1]^=1;
			a[cnt++]=i+1;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;++i){
		cout<<a[i]<<" ";
	}

	return 0;
}