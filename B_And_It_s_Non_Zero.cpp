#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

int bit_cnt[200005][20];

void solve(){
    int l,r;cin>>l>>r;
    int ans = 0;
    for(int i=0;i<20;++i){
        ans=max(ans,bit_cnt[r][i]-bit_cnt[l-1][i]);
    }
    ans=r-l+1-ans;
    cout<<ans<<endl;
}

int32_t main(){
    IOS;
    
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */

   for(int i=1;i<=200000;++i){
       for(int j=0;j<20;++j){
           bit_cnt[i][j]=bit_cnt[i-1][j]+((i>>j)&1);
       }
   }
    
    
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}