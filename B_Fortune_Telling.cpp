#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n,x,y;cin>>n>>x>>y;
    lli nO=0;
    for(lli i=0;i<n;++i){
        lli a;
        cin>>a;
        nO+=(a%2==1);
    }
    //out(nO);
    if(nO%2==1){
        if(x%2!=y%2){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }else{
        if(x%2==y%2){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
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