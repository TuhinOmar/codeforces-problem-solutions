#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int a[110];
int b[210];
int bis[210];
int t,n;
bool flag;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	
	cin>>t;
	while(t--){
		flag=1;
		memset(b,0,sizeof(b));
		memset(bis,0,sizeof(bis));
		cin>>n;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			bis[a[i]]=1;
		}
		for(int i=1;i<=n;++i){
			b[2*i-1]=a[i];
			for(int j=a[i]+1;j<=2*n;++j){
				if(!bis[j]){
					b[2*i]=j;
					bis[j]=1;
					break;
				}
			}
			if(b[2*i]==0){
				flag=0;
				break;
			}
		}
		if(flag==1)for(int i=1;i<=2*n;++i)cout<<b[i]<<" ";
		else cout<<"-1";
		cout<<'\n';
	}
	
	return 0;
}