#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n, m, sx, sy, d;
    cin>>n>>m>>sx>>sy>>d;
    if(((sx - d <= 1) && (sy - d <= 1)) || ((sx + d >= n) && (sy + d >= m)) || (sx - d <= 1 && sx + d >= n) || (sy - d <= 1 && sy + d >= m)) {
      cout<<-1<<endl;
    } else {
      cout<<(n + m - 2)<<endl;
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