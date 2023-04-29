#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    vector<string>s(2);
    vector<int>type;
    int c;cin>>c;
    cin>>s[0]>>s[1];
    for(int i=0;i<c;++i){
        if(s[0][i]=='1'&&s[1][i]=='1'){
            type.push_back(0);
        }else if(s[0][i]=='0'&&s[1][i]=='0'){
            type.push_back(1);
        }
        else{
            type.push_back(2);
        }
    }
    //vet(type);
    int ans=0;
    for(int i=0;i<c;++i){
        if(type[i]==0){
            if(i!=(c-1)&&type[i+1]==1){
                ans+=2;
                ++i;
            }
        }else if(type[i]==1){
            if(i!=(c-1)&&type[i+1]==0){
                ans+=2;
                ++i;
            }else{
                ans+=1;
            }
        }else{
            ans+=2;
        }
    }
    cout<<ans<<endl; 
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