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
    bool ok=false;
    lli totInt=0;
    lli totOdd=0;
    for(lli i=0;i<n;++i){
        cin>>v[i];
        if(i>0&&i<n-1){
            totInt+=v[i];
            if(v[i]%2==1){
                ++totOdd;
            }
            if(v[i]>=2){
                ok=true;
            }
        }
    }
    if(n==3&&v[1]%2!=0){
        cout<<-1<<endl;
        return;
    }
    if(!ok){
        cout<<-1<<endl;
        return;
    }else{
        cout<<(totOdd+(totInt-totOdd)/2)<<endl;
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