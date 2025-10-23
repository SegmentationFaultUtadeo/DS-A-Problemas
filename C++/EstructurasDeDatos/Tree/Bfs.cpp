#include<bits/stdc++.h>

#define endl '\n'

using namespace std;


vector<int> bfs(int n, int source, map<int, vector<int>> tree){
    
}


int main(){

    int t; cin >> t;

    unordered_map<int, vector<int>> tree;

    for(int i = 1; i <= t; ++i) tree[i];

    for(int i = 1; i < t; ++i){
        int node, child; cin >> node >> child;
        tree[node].push_back(child);
    }

    

    return 0;
}
