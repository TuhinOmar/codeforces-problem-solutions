#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

const int N=2e5+10;

int v[N],c[N];
set<int>st;

void solve(){
    int n;cin>>n;
    vector<int>ans;
    for(int i=0;i<n;++i){
        cin>>v[i];
        ++c[v[i]];
    }
    int z=0;
    for(int i=0;i<n;++i){
        if(!c[z]&&!st.empty()){
            ans.push_back(z),z=0,st.clear();
        }
        st.insert(v[i]);
        while(st.count(z)){
            ++z;
        }
        --c[v[i]];
    }
    if(!st.empty()){
        ans.push_back(z);
        st.clear();
    }
    cout<<ans.size()<<endl;
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