#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int h,w;
	cin>>h>>w;
	vector<string>whole(h);
	vector<vector<bool>>star(h,vector<bool>(w,false));
	for(int i=0;i<h;++i){
		cin>>whole[i];
	}
	for(int i=1;i<h-1;++i){
		for(int j=1;j<w-1;++j){
			if(whole[i][j]=='*'&&whole[i-1][j]=='*'&&whole[i+1][j]=='*'&&whole[i][j-1]=='*'&&whole[i][j+1]=='*'){
				int upperEnd=i,lowerEnd=i,leftEnd=j,rightEnd=j;
				while(upperEnd>=0&&whole[upperEnd][j]=='*')star[upperEnd--][j]=true;
				while(lowerEnd<h&&whole[lowerEnd][j]=='*')star[lowerEnd++][j]=true;
				while(leftEnd>=0&&whole[i][leftEnd]=='*')star[i][leftEnd--]=true;
				while(rightEnd<w&&whole[i][rightEnd]=='*')star[i][rightEnd++]=true;

				for(int k=0;k<h;++k){
					for(int l=0;l<w;++l){
						if(star[k][l]!=(whole[k][l]=='*')){
							cout<<"NO";
							return 0;
						}
					}
				}
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}