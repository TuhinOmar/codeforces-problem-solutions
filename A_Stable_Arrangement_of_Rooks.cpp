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
    if(n<2*k-1){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(i%2==0&&j%2==0&&i==j&&k!=0){
                    cout<<'R';
                    --k;
                }else{
                    cout<<'.';
                }
            }
            cout<<endl;
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