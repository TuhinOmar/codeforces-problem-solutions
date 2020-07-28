#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

const int N=50000;


void plr_1(){
	cout<<"Ashishgup"<<endl;
}
void plr_2(){
	cout<<"FastestFinger"<<endl;
}

bool check_prime(int n){
	for(int i=2;i<min(n,N);++i){
		if(n%i==0){
			return false;
		}
	}
	return true;
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
		bool lose=(n==1);
		if(n>2&&n%2==0){
			if((n&(n-1))==0){
				lose=true;
			}else if(n%4!=0&&check_prime(n/2)){
				lose=true;
			}
		}
		if(lose){
			plr_2();
		}else{
			plr_1();
		}
	}

	return 0;
}