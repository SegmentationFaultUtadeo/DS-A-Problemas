#include <bits/stdc++.h>
using namespace std;

int CC(int source, vector<vector<int>> &graph){

    int cc = graph[source].size();
    for (int i : graph[source]){
        if (binary_search(graph[i].begin(), graph[i].end(), source)){
            --cc;
        }
    }

    return cc;
}

int main(){
    int N, M; cin >> N >> M;
    vector<vector<int>> graph(N+1, vector<int>{});

    while (M--){
        int u, v; cin >> u >> v;
        graph[v].push_back(u);
    }

    for (int i = 1; i <= N; ++i){
        if (graph[i].size() > 0)
            sort(graph[i].begin(), graph[i].end());
    }

    int maxi_node = 1;
    int maxi_cc = CC(1, graph);
    for (int i = 2; i <= N; ++i){
        int current_maxi = CC(i, graph);
        if (current_maxi > maxi_cc){
            maxi_node = i;
            maxi_cc = current_maxi;
        }
    }

    cout << maxi_node << " " << maxi_cc << endl;
}
