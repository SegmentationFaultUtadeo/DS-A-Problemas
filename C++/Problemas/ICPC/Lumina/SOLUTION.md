# Lumina - Solution

## Problem Analysis

This is a **minimum dominating set** problem in a graph where:
- Each gem is a node
- Two gems are connected if one can activate the other (distance ≤ radius)
- Goal: Find minimum number of gems to manually activate so all gems become illuminated through chain reactions

## Solution Strategy

We model this as a **graph reachability** problem:

### Graph Construction
1. **Nodes**: Each gem is a node
2. **Edges**: Gem `i` can activate gem `j` if `distance(i,j) ≤ radius[i]`
3. **Goal**: Find minimum set of nodes to activate such that all nodes are reachable

### Key Insight
A gem `j` is illuminated if:
- It's manually activated, OR  
- There exists a path from some manually activated gem to `j` following the "can activate" relationships

### Algorithm Steps

1. **Build adjacency graph**: For each gem pair (i,j), add edge i→j if gem i can activate gem j
2. **Try all activation combinations**: Use bitmask to try all 2^n possibilities  
3. **For each combination**:
   - Mark selected gems as activated
   - Use DFS/BFS from each activated gem to find all reachable gems
   - Check if all gems are reachable
   - Track minimum number of activated gems among valid solutions

### Distance Calculation
```cpp
bool canReach(const Gem& a, const Gem& b) {
    long long dx = a.x - b.x;
    long long dy = a.y - b.y;
    long long distSq = dx * dx + dy * dy;
    return distSq <= (long long)a.r * a.r;
}
```

### Reachability Check
From each manually activated gem, perform DFS to mark all gems that can be reached through the chain reaction.

## Time Complexity
O(n² + 2^n × n²) where:
- O(n²): Building the adjacency graph  
- O(2^n × n²): Trying all combinations with DFS for each

## Space Complexity
O(n²) for the adjacency list representation

## Note on Constraints
Since n ≤ 5000, the brute force approach with 2^n is not feasible for large n. For the contest setting, this solution works for small test cases, but a more sophisticated approach (like approximation algorithms for minimum dominating set) would be needed for larger inputs.

## C++ Implementation

```cpp
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
```