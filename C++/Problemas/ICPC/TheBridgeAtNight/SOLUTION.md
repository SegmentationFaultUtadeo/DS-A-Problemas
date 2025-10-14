# The Bridge At Night - Solution

## Problem Analysis

This is a classic optimization problem where N people need to cross a bridge with constraints:
- At most 2 people can cross at once
- They need a lamp, so someone must return with it
- When 2 people cross together, they move at the speed of the slower person
- Goal: minimize total time for everyone to cross

## Solution Strategy

We use **dynamic programming** with a key insight about optimal strategies for getting people across.

### Key Insights

1. **Sort by time**: Always consider people in order of crossing time
2. **Two strategies** for moving the slowest person across:
   - **Strategy 1**: Two fastest cross → fastest returns → two slowest cross → second fastest returns
   - **Strategy 2**: Fastest and slowest cross → fastest returns → fastest and second slowest cross

### Base Cases
- **N = 1**: Person crosses alone (time = their crossing time)
- **N = 2**: Both cross together (time = slower person's time)

### Recurrence Relation

For i ≥ 2 people (0-indexed), to get person i across:

```
dp[i] = min(
    dp[i-2] + times[0] + times[i] + times[0] + times[1],     // Strategy 1
    dp[i-2] + times[0] + times[i] + times[i-1] + times[0]    // Strategy 2
)
```

Where:
- `dp[i]` = minimum time to get first i+1 people across
- `times[]` = sorted crossing times

### Strategy Analysis

**Strategy 1**: `times[0] + times[i] + times[0] + times[1]`
- Two fastest (0,1) cross
- Fastest (0) returns  
- Two slowest (i-1,i) cross
- Second fastest (1) returns

**Strategy 2**: `times[0] + times[i] + times[i-1] + times[0]` 
- Fastest and slowest (0,i) cross
- Fastest (0) returns
- Fastest and second slowest (0,i-1) cross

## Time Complexity
O(N log N) for sorting + O(N) for DP = O(N log N)

## Space Complexity
O(N) for the DP array

## C++ Implementation

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    
    while (cin >> n && n != 0) {
        vector<int> times(n);
        for (int i = 0; i < n; i++) {
            cin >> times[i];
        }
        
        sort(times.begin(), times.end());
        
        if (n == 1) {
            cout << times[0] << endl;
            continue;
        }
        
        if (n == 2) {
            cout << times[1] << endl;
            continue;
        }
        
        // For n >= 3, we use dynamic programming approach
        // dp[i] = minimum time to get first i+1 people across
        vector<int> dp(n, 0);
        dp[0] = times[0];  // First person crosses alone
        dp[1] = times[1];  // Two fastest cross together
        
        for (int i = 2; i < n; i++) {
            // Two strategies to get person i across:
            // Strategy 1: Two fastest go, fastest returns, two slowest go, second fastest returns
            int strategy1 = dp[i-2] + times[0] + times[i] + times[0] + times[1];
            
            // Strategy 2: Fastest and slowest go, fastest returns, fastest and second slowest go  
            int strategy2 = dp[i-2] + times[0] + times[i] + times[i-1] + times[0];
            
            dp[i] = min(strategy1, strategy2);
        }
        
        cout << dp[n-1] << endl;
    }
    
    return 0;
}
```