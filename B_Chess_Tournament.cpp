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
    vector<int>ind;
    for(int i=0;i<n;++i)if(s[i]=='2')ind.push_back(i);
    int k=ind.size();
    if(k==1||k==2){
        cout<<"NO"<<endl;
        return;
    }
    vector<string>res(n,string(n,'='));
    for(int i=0;i<n;++i)res[i][i]='X';
    for(int i=0;i<k;++i){
        int x=ind[i], y=ind[(i+1)%k];
        res[x][y]='+';res[y][x]='-';
    }
    cout<<"YES"<<endl;
    for(auto i:res)cout<<i<<endl;
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