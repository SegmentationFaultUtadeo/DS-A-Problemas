# Signal Coverage - Solution

## Problem Analysis

This is a **constraint satisfaction problem** that can be modeled as **2-SAT** (Boolean satisfiability with at most 2 variables per clause):

### Constraints:
1. **No overlap**: No two antennas can have overlapping coverage areas during overlapping time periods
2. **Pair restrictions**: For each specified pair, at least one antenna must be installed

### Variables:
- For each antenna `i`, we have a boolean variable `x_i` (true = installed, false = not installed)

## 2-SAT Modeling

### Conflict Constraints
Two antennas `i` and `j` conflict if:
- Their time periods overlap: `max(b_i, b_j) ≤ min(e_i, e_j)`
- Their coverage areas overlap: `distance(i,j) < r_i + r_j`

For conflicting antennas: "NOT (both installed)" = `¬(x_i ∧ x_j)` = `¬x_i ∨ ¬x_j`

This translates to implications:
- `x_i → ¬x_j` (if i is installed, j cannot be)
- `x_j → ¬x_i` (if j is installed, i cannot be)

### Pair Restriction Constraints
For each pair (u,v), at least one must be installed: `x_u ∨ x_v`

This translates to implications:
- `¬x_u → x_v` (if u is not installed, v must be)
- `¬x_v → x_u` (if v is not installed, u must be)

## 2-SAT Solution Algorithm

We use **Kosaraju's algorithm** for finding strongly connected components:

### Variable Encoding
- Variable `2*i` represents "antenna i is installed"  
- Variable `2*i+1` represents "antenna i is NOT installed"

### Steps:
1. **Build implication graph**: Add edges for all implications
2. **Find SCCs**: Use DFS-based SCC algorithm
3. **Check satisfiability**: If variable `x` and `¬x` are in same SCC → unsatisfiable
4. **Extract assignment**: If satisfiable, assign values based on SCC ordering

### Time/Space Overlap Detection

```cpp
bool timeOverlap(const Antenna& a1, const Antenna& a2) {
    return !(a1.e < a2.b || a2.e < a1.b);
}

bool spaceOverlap(const Antenna& a1, const Antenna& a2) {
    double dx = a1.x - a2.x;
    double dy = a1.y - a2.y;
    double dist = sqrt(dx*dx + dy*dy);
    return dist < a1.r + a2.r;
}
```

## Time Complexity
- **Graph construction**: O(n²) for checking all antenna pairs
- **2-SAT solving**: O(n + m) where m is number of implications
- **Total**: O(n²)

## Space Complexity
O(n²) for the implication graph

## C++ Implementation

```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Antenna {
    int r, x, y, b, e;
};

bool timeOverlap(const Antenna& a1, const Antenna& a2) {
    return !(a1.e < a2.b || a2.e < a1.b);
}

bool spaceOverlap(const Antenna& a1, const Antenna& a2) {
    double dx = a1.x - a2.x;
    double dy = a1.y - a2.y;
    double dist = sqrt(dx*dx + dy*dy);
    return dist < a1.r + a2.r;
}

bool conflict(const Antenna& a1, const Antenna& a2) {
    return timeOverlap(a1, a2) && spaceOverlap(a1, a2);
}

void addImplication(vector<vector<int>>& graph, int u, int v, int n) {
    // u -> v  means if u is true then v must be true
    // This is equivalent to ~u OR v
    graph[u].push_back(v);
    graph[v ^ 1].push_back(u ^ 1);  // contrapositive: ~v -> ~u
}

void dfs1(int v, vector<vector<int>>& graph, vector<bool>& used, vector<int>& order) {
    used[v] = true;
    for (int u : graph[v]) {
        if (!used[u]) {
            dfs1(u, graph, used, order);
        }
    }
    order.push_back(v);
}

void dfs2(int v, vector<vector<int>>& rgraph, vector<bool>& used, vector<int>& comp, int color) {
    used[v] = true;
    comp[v] = color;
    for (int u : rgraph[v]) {
        if (!used[u]) {
            dfs2(u, rgraph, used, comp, color);
        }
    }
}

bool solve2SAT(vector<vector<int>>& graph, int n, vector<int>& assignment) {
    vector<bool> used(2*n, false);
    vector<int> order;
    
    // Build reverse graph
    vector<vector<int>> rgraph(2*n);
    for (int i = 0; i < 2*n; i++) {
        for (int j : graph[i]) {
            rgraph[j].push_back(i);
        }
    }
    
    // First DFS
    for (int i = 0; i < 2*n; i++) {
        if (!used[i]) {
            dfs1(i, graph, used, order);
        }
    }
    
    // Second DFS
    fill(used.begin(), used.end(), false);
    vector<int> comp(2*n, -1);
    int color = 0;
    
    reverse(order.begin(), order.end());
    for (int v : order) {
        if (!used[v]) {
            dfs2(v, rgraph, used, comp, color++);
        }
    }
    
    // Check if satisfiable
    assignment.assign(n, 0);
    for (int i = 0; i < n; i++) {
        if (comp[2*i] == comp[2*i+1]) {
            return false;  // Unsatisfiable
        }
        assignment[i] = comp[2*i] > comp[2*i+1] ? 1 : 0;
    }
    
    return true;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n, m;
        cin >> n >> m;
        
        vector<Antenna> antennas(n);
        for (int i = 0; i < n; i++) {
            cin >> antennas[i].r >> antennas[i].x >> antennas[i].y >> antennas[i].b >> antennas[i].e;
        }
        
        // Build 2-SAT graph
        // Variable i represents whether antenna i is installed
        // Variable 2*i = antenna i is installed
        // Variable 2*i+1 = antenna i is NOT installed
        vector<vector<int>> graph(2*n);
        
        // Constraint 1: No two conflicting antennas can both be installed
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (conflict(antennas[i], antennas[j])) {
                    // If i is installed, j cannot be installed
                    addImplication(graph, 2*i, 2*j+1, n);
                    // If j is installed, i cannot be installed  
                    addImplication(graph, 2*j, 2*i+1, n);
                }
            }
        }
        
        // Constraint 2: Pair restrictions - at least one from each pair must be installed
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            u--; v--;  // Convert to 0-indexed
            
            // At least one of u or v must be installed
            // ~u -> v  and  ~v -> u
            addImplication(graph, 2*u+1, 2*v, n);
            addImplication(graph, 2*v+1, 2*u, n);
        }
        
        vector<int> assignment;
        if (solve2SAT(graph, n, assignment)) {
            string result(n, '0');
            for (int i = 0; i < n; i++) {
                if (assignment[i]) {
                    result[i] = '1';
                }
            }
            cout << result << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    
    return 0;
}
```