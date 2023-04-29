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
    unordered_map<int,int>ump;
    vector<int>v(n+1);
    for(int i=1;i<=n;++i){
        int x;cin>>x;
        ump[x]=i;
        v[i]=x;
    }
    int l=1,r=1;
    for(int i=1;i<=n;++i){
        if(ump[i]!=i){
            l=i;
            r=ump[i];
            break;
        }
    }
    for(int i=1;i<l;++i){
        cout<<v[i]<<" ";
    }
    for(int i=r;i>=l;--i){
        cout<<v[i]<<" ";
    }
    for(int i=r+1;i<=n;++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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