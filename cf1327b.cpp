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
		int n;
		int princes[100002];
		int princesses[100002];
		cin>>n;
		for(int i=1;i<=n;++i)princes[i]=0;
		for(int i=1;i<=n;++i){
			princesses[i]=0;
			int k;
			cin>>k;
			while(k--){
				int q;
				cin>>q;
				if(!princesses[i]&&!princes[q]){
					princesses[i]=q;
					princes[q]=1;
				}
			}
		}
		bool f=0;
		for(int i=1;i<=n;++i){
			int ans;
			if(!princesses[i]){
				for(int j=1;j<=n;++j){
					if(!princes[j]){
						ans=j;
						break;
					}
				}
				printf("IMPROVE\n%d %d\n",i,ans);
				f=1;
				break;
			}
		}
		if(!f)printf("OPTIMAL\n");
	}
	
	return 0;
}