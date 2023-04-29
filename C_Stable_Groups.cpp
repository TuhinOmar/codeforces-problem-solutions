#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n,k,x;cin>>n>>k>>x;
    vector<lli>v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    lli ans=0;
    vector<lli>d(n-1);
    for(int i=0;i<n-1;++i){
        d[i]=(v[i+1]-v[i]);
    }
    sort(d.begin(),d.end());
    for(int i=0;i<n-1&&k>=0;++i){
        if(d[i]){
            k-=((d[i]-1)/x);
        }
        if(k>=0){
            ++ans;
        }
    }
    cout<<n-ans;
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
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}