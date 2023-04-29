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

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ind = 0;
        unordered_map<int,int>ump;
        for(int i=0;i<n;++i){
            int x;cin>>x;
            ump[x]=ind++;
        }
        int mx_i = max(ump[n],ump[1]),mn_i = min(ump[1],ump[n]);
        //cout<<mx_i<<mn_i;
        int move = min(min(mx_i+1,n-mn_i),min(mn_i+1+n-mx_i,n-mn_i+mx_i+1));
        cout<<move<<endl;
    }
	
	return 0;
}