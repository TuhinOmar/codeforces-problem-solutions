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
    vector<int>v(n);
    vector<int>vd,vl;
    vector<int>trk(n+1);
    for(int i=0;i<n;++i){
        cin>>v[i];
        trk[v[i]]=i;
    }
    string s;cin>>s;
    for(int i=0;i<n;++i){
        s[i]=='0'?vd.push_back(v[i]):vl.push_back(v[i]);
    }
    sort(vd.begin(),vd.end());
    sort(vl.begin(),vl.end());
    vector<int>ans(n);
    int ld=vd.size();
    int ll=vl.size();
    for(int i=0;i<ld;++i){
        ans[trk[vd[i]]]=i+1;
    }
    for(int i=0;i<ll;++i){
        ans[trk[vl[i]]]=ld+i+1;
    }
    for(int &i:ans)cout<<i<<" ";
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