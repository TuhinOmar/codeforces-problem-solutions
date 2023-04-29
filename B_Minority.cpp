#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    string s;cin>>s;
    int n=s.size();
    int cntZ=0;
    int cntO=0;
    int mx=0;
    for(int i=0;i<n;++i){
        (s[i]=='0')?(++cntZ):(++cntO);
        if(cntZ!=cntO){
            mx=max(mx,min(cntZ,cntO));
        }
    }
    cout<<mx<<endl;
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