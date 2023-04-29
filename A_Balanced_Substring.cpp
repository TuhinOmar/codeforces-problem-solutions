#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n;
    string s;
    cin>>n>>s;
    int t;
    if(s.find("ab")!=string::npos)cout<<s.find("ab")+1<<" "<<s.find("ab")+2<<endl;
    else if(s.find("ba")!=string::npos)cout<<s.find("ba")+1<<" "<<s.find("ba")+2<<endl;
    else cout<<-1<<" "<<-1<<endl;
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