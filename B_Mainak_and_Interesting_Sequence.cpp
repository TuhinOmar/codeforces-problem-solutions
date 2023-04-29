#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n, m; cin >> n >> m;
    if(n == m) {
     cout << "Yes" << endl;
     for(lli i = 0; i < n; ++i) {
          cout << 1 << " ";
     }
     cout << endl;
     return;
    } else if( n < m && n % 2 == 1) {
     cout << "Yes" << endl;
     for(lli i = 0; i < n - 1; ++i) {
          cout << 1 << " ";
          --m;
     }
     cout << m <<endl;
     return;
    } else if(n % 2 == 0 && n < m && ((m - (n - 2))) % 2 == 0) {
     cout << "Yes" << endl;
     for(lli i = 0; i < n - 2; ++i) {
          cout << 1 << " ";
          --m;
     }
     cout << m / 2 << " " << m / 2 << endl;
     return;
    } else { 
     cout << "No" << endl;
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