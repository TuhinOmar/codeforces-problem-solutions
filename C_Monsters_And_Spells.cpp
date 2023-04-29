#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

lli f(lli n){
    return ((n+1)*n)/2;
}

void solve(){
    int n;cin>>n;
    vector<int>k(n), h(n);
    for(auto &i:k)cin>>i;
    for(auto &i:h)cin>>i;
    vector<pair<int,int>>v;
    for(int i=0;i<n;++i){
        int cr=k[i];
        int cl=k[i]-h[i]+1;
        v.push_back({cl,cr});
    }
    sort(v.begin(),v.end());
    int l=1,r=0;
    lli ans=0;
    for(auto i:v){
        if(i.first>r){
            ans+=f(r-l+1);
            r=i.second;
            l=i.first;
        }else{
            r=max(r,i.second);
        }
    }
    ans+=f(r-l+1);
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
    
    
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}