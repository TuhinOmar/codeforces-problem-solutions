#include<bits/stdc++.h>

using namespace std;

int elements[120][2];
int parent[120]={-1};
int rnk[120];


void make_set(int a){
    parent[a]=a;
    rnk[a]=0;
}

int find_set(int a){
    if(a==parent[a]){
        return a;
    }
    return parent[a]=find_set(parent[a]);
}

void union_sets(int a, int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(rnk[a]<rnk[b]){
            swap(a,b);
        }
        parent[b]=a;
        if(rnk[a]==rnk[b]){
            ++rnk[a];
        }
    }
}

int main(){

    /*
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    */

    int n;cin>>n;
    for(int i=0;i<n;++i){
        cin>>elements[i][0]>>elements[i][1];
        // make_set(--elements[i][0]);
        // make_set(--elements[i][1]);
        make_set(i);
    }
    //int ans=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i!=j && find_set(i)!=find_set(j)){
                if(elements[i][0]==elements[j][0] || elements[i][1]==elements[j][1]){
                    union_sets(i,j);
                }
            }
        }
    }
    unordered_set<int>st;
    for(int i=0;i<n;++i){
        st.insert(find_set(i));
    }
    cout<<st.size()-1<<endl;

    return 0;
}