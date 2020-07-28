#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int t;
	cin>>t;
	while(t--){
		int len;
		string str;
		cin>>len>>str;
		string a(len,'0'),b(len,'0');
		for(int i=0;i<len;++i){
			if(str[i]=='1'){
				a[i]='1';
				b[i]='0';
				for(int j=i+1;j<len;++j){
					b[j]=str[j];
				}
				break;
			}else{
				a[i]=b[i]='0'+(str[i]-'0')/2;
			}
		}
		cout<<a<<endl<<b<<endl;
	}
	return 0;
}