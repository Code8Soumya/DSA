#include<bits/stdc++.h>
using namespace std;

class DisJointSet{
    vector<int> rank, parent, size;
public:
    DisJointSet(int n){
        rank.resize(n+1, 0);
        size.resize(n+1, 1);
        parent.resize(n+1);
        for(int i=0; i<=n; i++){
            parent[i] = i;
        }
    }
    int findUParent(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = findUParent(parent[node]);
    }
    void UnionByRank(int u, int v){
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_v] < rank[ulp_u]){
            parent[ulp_v] = ulp_u;
        }
        else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
    void UnionBySize(int u, int v){
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);
        if(ulp_u == ulp_v) return;
        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else{
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    DisJointSet ds(7);
    ds.UnionByRank(0, 1);
    ds.UnionByRank(1, 2);
    ds.UnionByRank(2, 3);
    ds.UnionByRank(5, 7);
    ds.UnionByRank(5, 6);
    ds.UnionByRank(5, 4);
    if(ds.findUParent(0) == ds.findUParent(6)){
        cout<<"Same"<<endl;
    } else cout<<"Not Same"<<endl;
    ds.UnionByRank(3, 7);
    if(ds.findUParent(0) == ds.findUParent(6)){
        cout<<"Same"<<endl;
    } else cout<<"Not Same"<<endl;

    return 0;
}

