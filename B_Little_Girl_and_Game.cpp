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
    unordered_map<char,int>ump;
    int n=s.size();
    for(int i=0;i<n;++i){
        ++ump[s[i]];
    }
    int nO=0,nE=0;
    for(auto &i:ump){
        i.second&1?++nO:++nE;
    }
    if(nO<2||nO%2==1){
        cout<<"First";
    }else{
        cout<<"Second";
    }
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
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}