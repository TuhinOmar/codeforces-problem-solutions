#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;cin>>n;
	string g[n];
	for(int i=0;i<n;++i){
		cin>>g[i];
	}
	int m;cin>>m;
	int p[m];
	for(int i=0;i<m;++i){
		cin>>p[i];
		--p[i];
	}
	stack<int>st,st2;
	st.push(p[0]);
	for(int i=1;i<m-1;++i){
		if(g[st.top()][p[i+1]]=='1'||p[i-1]==p[i+1]){
			if(st.top()!=p[i]){
				st.push(p[i]);
			}
		}else{
			if(st.top()!=p[i+1]){
				st.push(p[i+1]);
				++i;
			}
		}
	}
	if(st.top()!=p[m-1]){
		st.push(p[m-1]);
	}
	cout<<st.size()<<endl;
	while(!st.empty()){
		st2.push(st.top());
		st.pop();
	}
	while(!st2.empty()){
		cout<<st2.top()+1<<" ";
		st2.pop();
	}


	return 0;
}