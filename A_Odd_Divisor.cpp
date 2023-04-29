#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n;cin>>n;
    if(n%2!=0){
        cout<<"YES"<<endl;
    }else{
        while(n%2==0){
            n/=2;
        }
        cout<<((n>1)?"YES":"NO")<<endl;
    }
}

int32_t main(){
    IOS;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}