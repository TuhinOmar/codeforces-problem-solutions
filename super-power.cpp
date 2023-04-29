#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(int z){
    int n,k;cin>>n>>k;
    priority_queue<int>pq;
    for(int i=0;i<n;++i){
        int x;cin>>x;
        pq.push(x);
    }
    while(k--){
        int x=pq.top();
        pq.pop();
        pq.push(x/2);
        pq.push(x-(x/2));
    }
    cout<<"Case #"<<z<<": "<<pq.top()<<endl;
}

int32_t main(){
    IOS;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    
    int t;cin>>t;
    for(int i=1;i<=t;++i){
        solve(i);
    }
    
    return 0;
}