#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n;
    cin>>n;
    set<string>st1;
    set<string>st2;
    set<string>st3;

    string s;
    for(int i = 0; i < n; ++i) {
      cin>>s;
      st1.insert(s);
    }

    for(int i = 0; i < n; ++i) {
      cin>>s;
      st2.insert(s);
    }

    for(int i = 0; i < n; ++i) {
      cin>>s;
      st3.insert(s);
    
    }
    int scr1 = 0, scr2 = 0, scr3 = 0;
    for(auto i:st1) {
      if(st2.count(i) && st3.count(i)) {
        scr1 += 0;
      } else if(st2.count(i) || st3.count(i)) {
        scr1 += 1;
      } else {
        scr1 += 3;
      }
    }

    for(auto i:st2) {
      if(st1.count(i) && st3.count(i)) {
        scr2 += 0;
      } else if(st1.count(i) || st3.count(i)) {
        scr2 += 1;
      } else {
        scr2 += 3;
      }
    }

    for(auto i:st3) {
      if(st2.count(i) && st1.count(i)) {
        scr3 += 0;
      } else if(st2.count(i) || st1.count(i)) {
        scr3 += 1;
      } else {
        scr3 += 3;
      }
    }
    
    cout<<scr1<<" "<<scr2<<" "<<scr3<<endl;

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