#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    unordered_map<int,int>ump;
    int q;cin>>q;
    while(q--){
        int choice;cin>>choice;
        if(choice==1){
            int x;
            cin>>x;
            ++ump[x];
        }else{
            int x,y;cin>>x>>y;
            ump[y]=ump[x];
            ump[x]=0;
        }
    }
    for(auto i:ump){
        for(int j=0;j<i.second;++j){
            cout<<i.first<<" ";
        }
    }
}

int32_t main(){
    IOS;
    
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    
    
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}