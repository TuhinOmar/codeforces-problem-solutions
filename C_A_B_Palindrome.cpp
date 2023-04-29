#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int a,b;cin>>a>>b;
    int n=a+b;
    string s;cin>>s;
    for(int i=0;i<n;++i){
        if(s[i]=='?'){
            s[i]=s[n-1-i];
        }
    }
    a-=count(s.begin(),s.end(),'0');
    b-=count(s.begin(),s.end(), '1');
    for(int i=0;i<n/2;++i){
        if(s[i]=='?'){
            if(a>1)s[i]=s[n-i-1]='0',a-=2;
            else if(b>1)s[i]=s[n-i-1]='1',b-=2;
        }
    }
    if(n%2==1&&s[n/2]=='?'){
        if(a>0)s[n/2]='0',--a;
        else s[n/2]='1',--b;
    }
    string v=s;
    reverse(v.begin(),v.end());
    if(s==v&&a==0&&b==0){
        cout<<s<<endl;
    }else{
        cout<<-1<<endl;
    }
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