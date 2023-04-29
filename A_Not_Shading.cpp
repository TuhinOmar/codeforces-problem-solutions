#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n,m,r,c;cin>>n>>m>>r>>c;
    vector<vector<char>>v(n,vector<char>(m));
    int nB=0;
    bool rok=false;
    bool cok=false;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>v[i][j];
            if(v[i][j]=='B'){
                ++nB;
            }
            if(i==r-1&&v[i][j]=='B'){
                rok=true;
            }
            if(j==c-1&&v[i][j]=='B'){
                cok=true;
            }
        }
    }
    if(nB==0){
        cout<<-1<<endl;
        return;
    }
    if(v[r-1][c-1]=='B'){
        cout<<0<<endl;
    }else if(rok||cok){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
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
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}