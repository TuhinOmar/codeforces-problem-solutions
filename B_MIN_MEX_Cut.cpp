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
    int flag = 0;
    int trace=0;
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();++i){
        ++mp[s[i]];
        if(flag==0 && s[i]=='0'){
            flag=1;++trace;            
        }
        if(flag==1 && s[i]=='1'){
            flag=0;++trace;
        }
        if(trace==3){
            cout<<2<<endl;
            return;
        }
    }
    if(mp['0']==0)cout<<0<<endl;
    else cout<<1<<endl;
}

int32_t main(){
    IOS;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}