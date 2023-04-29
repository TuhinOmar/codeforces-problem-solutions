#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

bool check(int n, int m, vector<vector<int>>&v){
    bool ok = true;
    for(int i=0;i<n;++i){
        bool tmp=false;
        for(int j=0;j<m;++j){
            if(((i==0&&j==0)||(i==0&&j==m-1)||(i==n-1&&j==0)||(i==n-1&&j==m-1))&&v[i][j]>2){
                ok=false;
                tmp=true;
                break;
            }else if((i==0||i==n-1||j==0||j==m-1)&&v[i][j]>3){
                ok=false;
                tmp=true;
                break;
            }else if(v[i][j]>4){
                ok=false;
                tmp=true;
                break;
            }
            if(tmp)break;
        }
    }
    return ok;
}

void printV(int n, int m, vector<vector<int>>&v){
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if((i==0&&j==0)||(i==0&&j==m-1)||(i==n-1&&j==0)||(i==n-1&&j==m-1)){
                cout<<2<<" ";
            }else if(i==0||i==n-1||j==0||j==m-1){
                cout<<3<<" ";
            }else{
                cout<<4<<" ";
            }
        }
        cout<<endl;
    }
}

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>v[i][j];
        }
    }
    if(!check(n,m,v)){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        printV(n,m,v);        
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