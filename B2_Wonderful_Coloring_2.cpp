#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

int32_t main(){
    IOS;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        unordered_map<int,int>mp;
        vector<int>a(n);
        for(auto&i:a){
            cin>>i;
            if(mp[i]<k)++mp[i];
        }
        for(auto i:a){
            cout<<(mp[i]>0?mp[i]--:0)<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}