#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int a,b,c;cin>>a>>b>>c;
    int diff = abs(a-b);
    if(2*diff>=max(a,max(b,c))){
        if(c+diff>2*diff){
            cout<<c-diff<<endl;
        }else{
            cout<<c+diff<<endl;
        }
    }else{
        cout<<-1<<endl;
    }
}

int32_t main(){
    IOS;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}