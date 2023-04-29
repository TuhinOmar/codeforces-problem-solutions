#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    char d;cin>>d;
    string s1="qwertyuiop";
    string s2="asdfghjkl;";
    string s3="zxcvbnm,./";
    string s;cin>>s;
    for(int i=0;i<s.length();++i){
        if(s1.find(s[i])!=string::npos){
            cout<<((d=='R')?s1.at(s1.find(s[i])-1):s1.at(s1.find(s[i])+1));
        }else if(s2.find(s[i])!=string::npos){
            cout<<((d=='R')?s2.at(s2.find(s[i])-1):s2.at(s2.find(s[i])+1));
        }else{
            cout<<((d=='R')?s3.at(s3.find(s[i])-1):s3.at(s3.find(s[i])+1));
        }
    }

}

int32_t main(){
    IOS;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    
    
    // int t;cin>>t;
    // while(t--){
    solve();
    // }
    
    return 0;
}