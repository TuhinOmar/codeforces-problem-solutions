#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli a,s;cin>>a>>s;
    string b="";
    while(s>0){
        if(s%10>=a%10){
            b = to_string(s%10-a%10)+b;
            s/=10;
            a/=10;
        }else{
            if(s%100-a%10>9 || s%100-a%10<0){
                cout<<-1<<endl;
                return;
            }
            b = to_string(s%100-a%10)+b;
            s/=100;
            a/=10;
        }
    }
    stringstream strm(b);
    lli ans=0;
    strm>>ans;
    if(a>0)cout<<-1<<endl;
    else cout<<ans<<endl;
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