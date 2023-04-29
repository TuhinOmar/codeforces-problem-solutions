#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int x1,y1,x2,y2,x3,y3;cin>>x1>>y1>>x2>>y2>>x3>>y3;
    float l1,l2,l3;
    setprecision(9);
    l1=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    l2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    l3=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    if(l1+l2==l3)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}