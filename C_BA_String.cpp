#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n,k,x;cin>>n>>k>>x;
    --x;
    string s;cin>>s;
    reverse(s.begin(),s.end());
    string ans="";
    lli i=0;
    while(i<n){
        if(s[i]=='a'){
            ans+='a';++i;continue;
        }
        lli cnt=0;
        while(i<n&&s[i]=='*'){
            cnt+=k;++i;
        }
        for(lli j=0;j<(x%(cnt+1));++j){
            ans+='b';
        }
        x/=cnt+1;
    }
    reverse(ans.begin(),ans.end());
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