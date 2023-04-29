#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(int z){
    string s;cin>>s;
    int totalCharV=0,totalCharC=0,highestCharV=0,highestCharC=0;
    unordered_map<char,int>vowel;
    unordered_map<char,int>consonent;
    for(int i=0;i<s.length();++i){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            ++vowel[s[i]];
            ++totalCharV;
            highestCharV=max(highestCharV,vowel[s[i]]);
        }else{
            ++consonent[s[i]];
            ++totalCharC;
            highestCharC=max(highestCharC,consonent[s[i]]);
        }
    }
    int ans=min((totalCharV-highestCharV)*2+totalCharC,(totalCharC-highestCharC)*2+totalCharV);
    cout<<"Case #"<<z<<": "<<ans<<endl;
}

int32_t main(){
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    
    int t;cin>>t;
    for(int i=1;i<=t;++i){
        solve(i);
    }
    
    return 0;
}