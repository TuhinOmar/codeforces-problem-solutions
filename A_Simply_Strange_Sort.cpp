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
    for(auto&i:v)cin>>i;
    int cnt=0;
    while(true){
        bool isSorted=true;
        int flag=0;
        for(int i=0;i<n-2;i+=2){
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
                flag=1;isSorted=false;
            }
        }
        for(int i=1;i<n-1;i+=2){
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
                flag=2;isSorted=false;
            }
        }
        cnt+=flag;
        if(isSorted){
            cout<<cnt<<endl;
            break;
        }
    }
}

int32_t main(){
    IOS;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}