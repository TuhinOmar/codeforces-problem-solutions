#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

const int c=1e9;

void solve(){
    int n;cin>>n;
    string a,b;cin>>a>>b;
    int x,y,z,w;
    x=y=z=0, w=c;
    for(int i=0;i<n;++i){
        x+=a[i]-'0';
        y+=b[i]-'0';
        z+=a[i]!=b[i];
    }
    if(x==y)w=z;
    if(x==n-y+1)w=min(w,n-z);
    cout<<(w!=c?w:-1)<<endl;
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