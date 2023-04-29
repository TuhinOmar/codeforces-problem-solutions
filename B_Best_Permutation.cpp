#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n; cin >> n;
    if(n&1) {
     for(int i = n - 1; i >= 1; --i) {
          if(i == n-2) {
               continue;
          }
          cout << i << " ";
     }
     cout << n - 2 << " " << n << endl;
    } else {
     for(int i = n - 2;  i >= 1; --i) {
          cout << i << " ";
     }
     cout << n - 1 << " " << n <<endl;
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