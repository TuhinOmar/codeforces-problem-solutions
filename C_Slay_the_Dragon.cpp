#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n;cin>>n;
    vector<lli>v(n);
    lli hP=0;
    for(lli i=0;i<n;++i){
        cin>>v[i];
        hP+=v[i];
    }
    // for(auto&i:v)cin>>i;
    // lli hP=accumulate(v.begin(),v.end(),0);
    sort(v.begin(),v.end());
    lli m;cin>>m;
    for(lli i=0;i<m;++i){
        lli x,y;cin>>x>>y;
        lli ind=lower_bound(v.begin(),v.end(),x)-v.begin();
        lli coins=0;
        if(ind==0){
            if(y>(hP-v[ind])){
                coins+=(y-(hP-v[ind]));
            }
        }else if(ind!=n){
            lli a=0,b=0;
            if(v[ind]<x){
                a+=(x-v[ind]);
            }
            if(y>(hP-v[ind])){
                a+=(y-(hP-v[ind]));
            }
            if(v[ind-1]<x){
                b+=(x-v[ind-1]);
            }
            if(y>(hP-v[ind-1])){
                b+=(y-(hP-v[ind-1]));
            }
            coins=min(a,b);
        }else{
            lli a=0;
            if(v[ind-1]<x){
                a+=(x-v[ind-1]);
            }
            if(y>(hP-v[ind-1])){
                a+=(y-(hP-v[ind-1]));
            }
            coins=a;
        }
        cout<<coins<<endl;
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