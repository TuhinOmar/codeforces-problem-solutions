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
    map<string,bool>mp;
    bool ok=false;
    for(int i=0;i<n;++i){
        string s;cin>>s;
        mp[s]=true;
        reverse(s.begin(),s.end());
        if(mp[s]||mp[s.substr(0,s.size()-1)]){
            ok=true;
        }
        for(char ch='a';ch<='z';++ch){
            if(mp[s+ch])ok=true;
        }
    }
    if(ok)cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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