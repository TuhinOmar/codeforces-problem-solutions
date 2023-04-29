#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(int z){
    int n;cin>>n;
    vector<string>s(n);
    for(auto&i:s)cin>>i;
    // int colCnt=0;
    // int rowCnt=0;
    // int minCross=n;
    multiset<int>st;
    

    for(int i=0;i<n;++i){
        int dotCount=0;
        bool flag=true;
        for(int j=0;j<n;++j){
            if(s[i][j]=='O'){
                flag=false;
                break;
            }else if(s[i][j]=='.'){
                ++dotCount;
            }
                
        }
        if(!flag)continue;
        st.insert(dotCount);
        // if(dotCount<minCross){
        //     minCross=dotCount;
        //     rowCnt=1;
        // }else if(dotCount==minCross){
        //     ++rowCnt;
        // }
    }
    for(int i=0;i<n;++i){
        int dotCount=0;
        bool flag=true;
        for(int j=0;j<n;++j){
            if(s[j][i]=='O'){
                flag=false;
                break;
            }else if(s[j][i]=='.'){
                ++dotCount;
            }
        }
        if(!flag)continue;
        st.insert(dotCount);
        // if(dotCount<minCross){
        //     minCross=dotCount;
        //     colCnt=1;
        // }else if(dotCount==minCross){
        //     ++colCnt;
        // }
    }
    if(st.empty())cout<<"Impossible"<<endl;
    else cout<<*st.begin()<<" "<<st.count(*st.begin())<<endl;
    //int maxRes=min(rowCnt,colCnt);
    //cout<<minCross<<" "<<maxRes<<endl;
}

int32_t main(){
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    
    int t;cin>>t;
    for(int z=1;z<=t;++z){
        solve(z);
    }
    
    return 0;
}