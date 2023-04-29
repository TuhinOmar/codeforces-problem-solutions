#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

bool check(vector<vector<int>>a,int mid,int n,int m){
    for(auto &v:a)for(int &x:v)x=x>=mid;
    vector<int>tot(m);
    for(auto &v:a)for(int i=0;i<m;++i)tot[i]+=v[i];
    if(*min_element(tot.begin(),tot.end())==0)return false;
    for(auto &v:a)if(accumulate(v.begin(),v.end(),0)>1)return true;
    return false;
}

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(auto &v:a){
        for(int &i:v)cin>>i;
    }
    int l=0,r=1e9,mid;
    while(l<r){
        mid=(l+r+1)>>1;
        if(check(a,mid,n,m))l=mid;
        else r=mid-1;
    }
    cout<<l<<endl;
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