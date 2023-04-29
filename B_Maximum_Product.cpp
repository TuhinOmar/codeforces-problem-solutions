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
    vector<lli>v(n);
    for(auto&i:v)cin>>i;
    sort(v.begin(),v.end());
    cout<<max({v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5], v[0]*v[1]*v[n-1]*v[n-2]*v[n-3], v[0]*v[1]*v[2]*v[3]*v[n-1]})<<endl;
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