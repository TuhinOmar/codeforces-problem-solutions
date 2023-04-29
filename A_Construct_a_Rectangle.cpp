#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    vector<int>x(3);
    for(auto &i:x)cin>>i;
    sort(x.begin(),x.end());
    if(x[2]-x[1]==x[0]){
        cout<<"YES"<<endl;
    }else if(x[0]==x[1]&&x[2]%2==0){
        cout<<"YES"<<endl;
    }else if(x[1]==x[2]&&x[0]%2==0){
        cout<<"YES"<<endl;
    }else if(x[0]==x[2]&&x[1]%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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