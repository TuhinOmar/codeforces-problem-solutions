#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int&in:v)cin>>in;
	int as=0,bs=0,t,prev=0,move=0;
	bool aturn=true;
	for(int i=0,j=n-1;i<=j;){
		t=0;
		while(i<=j && t<=prev){
			if(aturn){
				as+=v[i];
				t+=v[i];
				i++;
			}else{
				bs+=v[j];
				t+=v[j];
				j--;
			}
		}
		move++;
		aturn=!aturn;
		prev=t;
	}
	cout<<move<<" "<<as<<" "<<bs<<'\n';
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}