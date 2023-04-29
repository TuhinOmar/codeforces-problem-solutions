#include <bits/stdc++.h>
 
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int
 
int32_t main(){
    /*IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    int k;cin>>k;
    vector<int>v(12);
    for(auto&i:v)cin>>i;
    sort(v.begin(),v.end(),greater<int>());
    int ans=0, cnt = 0;
    for(int i=0;i<12;++i){
        if(cnt<k){
            cnt+=v[i];
            ++ans;
        }else{
            cout<<ans;return 0;
        }
    }
    if(cnt>=k)cout<<ans;
    else cout<<-1;
    
    return 0;
}