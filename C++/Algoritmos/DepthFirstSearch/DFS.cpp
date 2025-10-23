#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> adj;
int n;

vector<bool> visited;


void dfs(int v){
    visited[v] = true;

    for(int u : adj[v]){
        if (!visited[u])
            dfs(u);
    }
}


int main(){


    return 0;
}
