#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Gem {
    long long x, y, r;
};

bool canReach(const Gem& a, const Gem& b) {
    long long dx = a.x - b.x;
    long long dy = a.y - b.y;
    long long distSq = dx * dx + dy * dy;
    return distSq <= (long long)a.r * a.r;
}

void dfs(int u, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, adj, visited);
        }
    }
}

int countComponents(vector<vector<int>>& adj, vector<bool>& activated) {
    int n = adj.size();
    vector<bool> visited(n, false);
    int components = 0;
    
    for (int i = 0; i < n; i++) {
        if (activated[i] && !visited[i]) {
            dfs(i, adj, visited);
            components++;
        }
    }
    
    // Count isolated non-activated nodes
    for (int i = 0; i < n; i++) {
        if (!activated[i] && !visited[i]) {
            components++;
        }
    }
    
    return components;
}

int main() {
    int n;
    
    while (cin >> n && n != 0) {
        vector<Gem> gems(n);
        for (int i = 0; i < n; i++) {
            cin >> gems[i].x >> gems[i].y >> gems[i].r;
        }
        
        // Build adjacency graph
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && canReach(gems[i], gems[j])) {
                    adj[i].push_back(j);
                }
            }
        }
        
        int minGems = n;
        
        // Try all possible combinations of activated gems
        for (int mask = 1; mask < (1 << n); mask++) {
            vector<bool> activated(n, false);
            int count = 0;
            
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    activated[i] = true;
                    count++;
                }
            }
            
            // Check if all gems are reachable
            vector<bool> reachable(n, false);
            for (int i = 0; i < n; i++) {
                if (activated[i]) {
                    reachable[i] = true;
                    // DFS from this activated gem
                    vector<bool> visited(n, false);
                    vector<int> stack = {i};
                    visited[i] = true;
                    
                    while (!stack.empty()) {
                        int u = stack.back();
                        stack.pop_back();
                        reachable[u] = true;
                        
                        for (int v : adj[u]) {
                            if (!visited[v]) {
                                visited[v] = true;
                                stack.push_back(v);
                            }
                        }
                    }
                }
            }
            
            bool allReachable = true;
            for (int i = 0; i < n; i++) {
                if (!reachable[i]) {
                    allReachable = false;
                    break;
                }
            }
            
            if (allReachable) {
                minGems = min(minGems, count);
            }
        }
        
        cout << minGems << endl;
    }
    
    return 0;
}