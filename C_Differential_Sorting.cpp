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
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    if(is_sorted(v.begin(),v.end())){
        cout<<0<<endl;
        return;
    }
    if(v[n-2]>v[n-1]||v.back()<0){
        cout<<-1<<endl;
        return;
    }
    cout<<n-2<<endl;
    for(int i=n-2;i>=1;--i){
        cout<<i<<" "<<n-1<<" "<<n<<endl;
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