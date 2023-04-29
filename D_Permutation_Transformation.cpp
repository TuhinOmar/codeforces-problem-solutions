#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

vector<int>v;
vector<int>ans;

void calc(int l,int r, int d){
    if(l>r){
        return;
    }
    int mx=INT_MIN;
    int idx;
    for(int i=l;i<=r;++i){
        if(mx<v[i]){
            mx=v[i];
            idx=i;
        }
    }
    ans[idx]=d;
    calc(l,idx-1,d+1);
    calc(idx+1,r,d+1);
}

void solve(){
    int n;cin>>n;
    v.resize(n);
    ans.resize(n);
    for(auto &i:v)cin>>i;
    calc(0,n-1,0); //first index last index of a segement and the depth =0
    for(auto &i:ans)cout<<i<<" ";
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