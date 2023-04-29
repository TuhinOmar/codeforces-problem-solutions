#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n,k;cin>>n>>k;
    if(n%2==0){
        if((n/2)%2==0){
            cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
        }else{
            cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
        }
    }else{
        cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
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