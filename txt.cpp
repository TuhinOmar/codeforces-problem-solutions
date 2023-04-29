#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    
}

int32_t main(){
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    
    // int t;cin>>t;
    // while(t--){
    //     solve();
    // }

    // bool comp(pair<char,int>a,pair<char,int>b){
    //     return a.second>b.second;
    // }

    bool cmp(pair<char,int>a,pair<char,int>b){
        return a.second>b.second;
    }
    unordered_map<char,int>mp;
    mp.insert({'A',5});
    mp.insert({'B',2});
    mp.insert({'z',10});
    mp.insert({'C',7});

    for(auto i:mp)cout<<i.second<<" ";

    sort(mp.begin(),mp.end(),cmp);


    
    return 0;
}