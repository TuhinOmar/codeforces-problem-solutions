#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

vector<bool>prime(100,true);

void solve(){
    int k;string s;
    cin>>k>>s;
    for(int i=0;i<k;++i){
        if((s[i]-'0')==1||(s[i]-'0')==4||(s[i]-'0')==6||(s[i]-'0')==8||(s[i]-'0')==9){
            cout<<1<<endl;
            cout<<s[i]<<endl;return;
        }
    }
    for(int i=0;i<k;++i){
        for(int j=i+1;j<k;++j){
            if(!prime[(s[i]-'0')*10+(s[j]-'0')]){
                cout<<2<<endl;
                cout<<s[i]<<s[j]<<endl;
                return;
            }
        }
    }
    exit(34);
}

int32_t main(){
    IOS;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    
    for(int i=2;i*i<=100;++i){
        if(prime[i]){
            for(int j=i*i;j<=100;j+=i){
                prime[j]=false;
            }
        }
    }
    // for(int i=2;i<=100;++i){
    //     if(prime[i])cout<<i<<" ";
    // }
    int t;cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}