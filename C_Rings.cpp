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
    string s;cin>>s;
    bool flag=false;
    for(int i=0;i<n;++i){
        if(s[i]=='0'){
            flag=true;
            if(i>=n/2){
                cout<<1<<" "<<i+1<<" "<<1<<" "<<i<<endl;return;
            }else{
                cout<<i+2<<" "<<n<<" "<<i+1<<" "<<n<<endl;return;
            }
        }
    }
    if(!flag)cout<<1<<" "<<n-1<<" "<<2<<" "<<n<<endl;
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