#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ll n,m,i,b;
    cin>>n>>m;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<m;i++){
        cin>>b;
        cout<<upper_bound(a,a+n,b)-a<<" ";
    }
    return 0;
}
