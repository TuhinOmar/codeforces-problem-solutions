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
    lli l=s.size();
    bool ok=false;
    lli idx;
    lli sum;
    for(int i=1;i<l;++i){
        if((s[i]-'0')+(s[i-1]-'0')>9){
            ok=true;
            idx=i-1;
            sum=(s[i]-'0')+(s[i-1]-'0');
        }
    }
    if(ok){
        s.replace(idx,2,to_string(sum));
    }else{
        s.replace(0,2,to_string((s[0]-'0')+(s[1]-'0')));
    }
    cout<<s<<endl;
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