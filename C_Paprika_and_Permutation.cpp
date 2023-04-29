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
    for(int i=1;i<=n;++i)st.insert(i);
    vector<int>rem;
    for(int i=0;i<n;++i){
        int x;cin>>x;
        if(st.find(x)!=st.end())st.erase(x);
        else{
            rem.push_back(x);
        }
    }
    sort(rem.begin(),rem.end());
    //reverse(rem.begin(),rem.end());
    bool ok = true;
    for(int &i:rem){
        auto el=st.begin();
        //++el;
        int per_el= (*el);
        if(per_el*2+1 > i){
            ok=false;
            break;
        }
        st.erase(el);
    }
    if(!ok){
        cout<<-1<<endl;
    }else{
        cout<<rem.size()<<endl;
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