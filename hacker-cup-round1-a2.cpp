#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int
const int mod=1000000007;

void solve(lli z){
    lli n;string s;
    cin>>n>>s;
    lli ans=0;
    for(lli i=0;i<n;++i){
        int flag1=0;
        int flag2=0;
        lli cnt1=0;
        lli cnt2=0;
        for(int j=i;j<n;++j){
            if(flag1==0&&s[j]=='O'){
                flag1=1;++cnt1;
            }
            if(flag1==1&&s[j]=='X'){
                flag1=0;++cnt1;
            }
            if(flag2==0&s[j]=='X'){
                flag2=1;++cnt2;
            }
            if(flag2==1&&s[j]=='O'){
                flag2=0;++cnt2;
            }
            lli k=min(cnt1,cnt2);
            ans+=k;
            ans%=mod;
        }
    }
    cout<<"Case #"<<z<<": "<<ans<<endl;
}

int32_t main(){
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    
    lli t;cin>>t;
    for(lli z=1;z<=t;++z){
        solve(z);
    }
    
    return 0;
}