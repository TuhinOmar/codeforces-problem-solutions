#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &i:v) cin >> i;
    int mxAns = -100000;
    if(n == 1) {
     cout << 0 << endl;
     return;
    }
    //auto it = max_element(v.begin(), v.end());
    //int diff1 = (it == --v.end() ? *(it) - *(v.begin()) : *(it) - *(++it));
    int diff1 = -100000;
    for(int i = 1; i < n; ++i) {
        diff1 = max(diff1, (v[i - 1] - v[i]));
    }
    diff1 = max(diff1, v[n-1] - v[0]);
    int diff2 = (*max_element(++v.begin(), v.end()) - *(v.begin()));
    int diff3 = (*(--v.end()) - *min_element(v.begin(), --v.end()));

    //cout << diff3 << endl;
    cout << max({diff1, diff2, diff3}) << endl;

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