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
    vector<bool>tick(n+1,false);
    unordered_map<int,int>ump;
    vector<int>ans;
    for(int i=1;i<=n-1;++i){
        int x,y;cin>>x>>y;
        if(!tick[x]&&!tick[y]){
            ans.push_back(2);
            tick[x]=tick[y]=true;
            ++ump[x];
            ++ump[y];
            if(ump[x]>2||ump[y]>2){
                cout<<-1<<endl;
                return;
            }
        }else if(tick[x]||tick[y]){
            ans.push_back(3);
            tick[x]=tick[y]=true;
            ++ump[x];
            ++ump[y];
            if(ump[x]>2||ump[y]>2){
                cout<<-1<<endl;
                return;
            }
        }
    }
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