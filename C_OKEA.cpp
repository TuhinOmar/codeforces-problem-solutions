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
    int nO=(n*k+1)/2;
    int nE=(n*k)-nO;
    if(nO%k!=0||nE%k!=0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=k;++j){
            cout<<(j-1)*n+i<<" ";
        }
        cout<<endl;
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