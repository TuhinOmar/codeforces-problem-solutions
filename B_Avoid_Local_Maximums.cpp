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
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    int ans=0;
    for(int i=1;i<n-1;++i){
        if(v[i-1]<v[i]&&v[i]>v[i+1]){
            ++ans;
            if(i<n-2&&v[i]<v[i+2]){
                v[i+1]=v[i+2];
            }else{
                v[i+1]=v[i];
            }
        }
    }
    cout<<ans<<endl;
    for(auto &i:v)cout<<i<<" ";
    cout<<endl;
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