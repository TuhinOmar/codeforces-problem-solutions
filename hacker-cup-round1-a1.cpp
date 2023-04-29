#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(int z){
    int n;
    string s;
    cin>>n>>s;
    int ans=0;
    char curr;
    int i;
    for(i=0;i<n;++i){
        if(s[i]=='X' || s[i]=='O'){
            curr=s[i];break;
        }
    }
    for(i;i<n;++i){
        if(curr=='X'&&s[i]=='O'){
            curr=s[i];
            ++ans;
        }else if(curr=='O'&&s[i]=='X'){
            curr='X';
            ++ans;
        }
    }
    cout<<"Case #"<<z<<": "<<ans<<endl;
}

int32_t main(){
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    
    int t;cin>>t;
    for(int z=1;z<=t;++z){
        solve(z);
    }
    
    return 0;
}