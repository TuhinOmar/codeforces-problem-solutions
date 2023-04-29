#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n;
    cin>>n;
    vector<lli>initialValue(n);
    string s;cin>>s;
    //priority_queue<lli, vector<lli>, greater<lli> >leftQ;
    priority_queue<pair<lli, lli>>rightQ;
    for(lli i = 1; i <= n; ++i) {
      if(i <= (n / 2)) {
        if(s[i-1] == 'L') {
          initialValue[i-1] = i - 1;
          rightQ.push({n - i, i - 1});
        } else {
          initialValue[i-1] = n - i;
        }
      } else {
        if(s[i - 1] == 'R') {
          initialValue[i-1] = n - i;
          rightQ.push({i - 1, i - 1});
        } else {
          initialValue[i-1] = i - 1;
        }
      }
    }
    //vet(initialValue);
    lli initialTot = accumulate(initialValue.begin(), initialValue.end(), (lli)0);
    //cout<<initialTot<<endl;
    // while(!leftQ.empty() || !rightQ.empty()) {
    //   lli maxElem = max(leftQ.top(), rightQ.top());
    //   cout<<initialTot - intal
    // }
    for(lli i = 1; i <= n; ++i) {
      if(!rightQ.empty()) {
        initialTot -= initialValue[rightQ.top().second];
        initialTot += rightQ.top().first;
        rightQ.pop();
      }
      cout<<initialTot<<" ";
    }
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