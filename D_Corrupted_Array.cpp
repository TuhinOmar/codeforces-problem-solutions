#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

int a[200010];

void solve(){
    int n;cin>>n;
    for(int i=1;i<=n+2;++i){
        cin>>a[i];
    }
    sort(a+1, a+n+3);
    lli sum=0;
    int idx=-1;
    for(int i=1;i<=n+1;++i){
        sum+=a[i];
    }
    if(sum==a[n+1]*2){
        idx=n+1;
    }else{
        for(int i=1;i<=n+1;++i){
            if(sum-a[i]==a[n+2]){
                idx=i;break;
            }
        }
    }
    if(idx<0){
        cout<<-1;
    }else{
        for(int i=1;i<=n+1;++i){
            if(i!=idx){
                cout<<a[i]<<" ";
            }
        }
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