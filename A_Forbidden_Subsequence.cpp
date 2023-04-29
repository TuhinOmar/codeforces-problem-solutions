#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    string s,t;cin>>s>>t;
    int n=s.size();
    sort(s.begin(),s.end());
    unordered_map<char,int>ump;
    for(int i=0;s[i]=='a'||s[i]=='b'||s[i]=='c';++i){
        ++ump[s[i]];
    }
    bool ok=true;
    if(ump['a']==0||ump['b']==0||ump['c']==0)ok=false;
    if(t=="abc" && ok){
        cout<<s.substr(0,ump['a']);
        cout<<s.substr(ump['a']+ump['b'],ump['c']);
        cout<<s.substr(ump['a'],ump['b']);
        cout<<s.substr(ump['a']+ump['b']+ump['c']);
    }else{
        cout<<s;
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