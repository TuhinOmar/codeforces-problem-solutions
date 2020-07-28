#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int solve(){
	int n;
	cin>>n;
	set<int>st;
	for(int i=0;i<n;++i){
		int in;
		cin>>in;
		st.insert(in);
	}
	int result=0;
	while(!st.empty()){
		int m=*st.rbegin();
		st.erase(m);
		if(m%2==0){
			++result;
			st.insert(m/2);
		}
	}
	return result;
}

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
	
	return 0;
}