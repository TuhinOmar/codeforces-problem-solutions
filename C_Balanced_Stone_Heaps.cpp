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
    int mn=1;
    for(int i=2;i<n;++i){
        mn=min({v[i-2],v[i-1],v[i]});
        if(i==(n-1)){
                int transfr=(v[i]-mn)/3;
                v[i]-=transfr*3;
                //v[i-1]+=transfr;
                v[i-2]+=transfr*2;
        }else{
            if(v[i+1]>=4*mn){
                int transfr=v[i]/3;
                v[i]-=transfr*3;
                v[i]+=mn;v[i+1]-=mn;
                v[i-1]+=transfr;
                v[i-2]+=transfr*2;
            }
        }
    }
    int ans=*min_element(v.begin(),v.end());
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