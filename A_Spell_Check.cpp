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
    string s;
    unordered_set<char>ust = {'T', 'i', 'm', 'u', 'r'};
    cin>>n>>s;
    if(n > 5 || n < 5) {
      cout<<"NO"<<endl;
      return;
    }
    for(auto &c:s){
      if(ust.find(c) != ust.end()) {
        ust.erase(c);
      }
    }
    if(!ust.empty()) {
      cout<<"NO"<<endl;
    } else {
      cout<<"YES"<<endl;
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