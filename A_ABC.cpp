#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n;cin>>n;
    bool ook=false,tok=false;
    for(int i=0;i<n;++i){
        char c;
        cin>>c;
        if(c=='1'){
            ook=true;
        }else{
            tok=true;
        }
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    if(n<=2&&ook&&tok){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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