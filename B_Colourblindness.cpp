#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n;
    string s1, s2;
    cin>>n>>s1>>s2;
    for(int i = 0; i < n; ++i) {
      if((s1[i] == 'R' && s2[i] != 'R') || (s1[i] != 'R' && s2[i] == 'R')) {
        cout<<"NO"<<endl;
        return;
      }
    }
    cout<<"YES"<<endl;
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