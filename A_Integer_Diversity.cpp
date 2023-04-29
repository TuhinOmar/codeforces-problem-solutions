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
    set<int>st;
    for(int i=0;i<n;++i){
        int x;cin>>x;
        st.insert(x);
    }
    int ans=0;
    if(st.find(0)!=st.end()){
        ++ans;
        st.erase(0);
    }
    for(auto i:st){
        if(st.find(-i)!=st.end()){
            ans+=2;
            st.erase(-i);
            st.erase(i);
        }else if(st.count(i)>=2){
            ans+=2;
        }
        else{
            ++ans;
        }
    }
    cout<<ans<<endl;
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