#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        for(int j=0;j<m;++j){
            if(s[j]=='.'){
                if((i+j)&1)s[j]='B';
                else s[j]='W';
            }
        }
        cout<<s<<endl;
    }
}

int32_t main(){
    IOS;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    
    
    // int t;cin>>t;
    // while(t--){
         solve();
    // }
    
    return 0;
}