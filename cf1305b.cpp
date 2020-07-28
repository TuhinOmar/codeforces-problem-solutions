#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long int

typedef long long int ll;

int32_t main()
{
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	string s;
	cin>>s;
	std::vector<int> left,right;
	int l=0,r=s.size()-1;
	while(l<r){
		while(l<s.size()&&s[l]==')'){
			++l;
		}
		while(r>=0&&s[r]=='('){
			--r;
		}
		if(l<s.size()&&r>=0&&l<r){
			left.push_back(l+1);
			right.push_back(r+1);
			++l;
			--r;
		}
	}
	if(left.empty()){
		cout<<0<<endl;
		return 0;
	}
	cout<<1<<endl;
	cout<<2*left.size()<<endl;
	for(auto it:left){
		cout<<it<<" ";
	}
	reverse(right.begin(),right.end());
	for(auto it:right){
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;
}