# Only1s0s - Solution

## Problem Analysis

We need to find the smallest positive integer M that:
1. Is a multiple of N (M = N × D for some integer D)
2. Contains only digits 1 and 0 in decimal representation

The goal is to output D, where M is the smallest such number.

## Solution Strategy

We use BFS (Breadth-First Search) to build numbers containing only 1s and 0s, starting from the smallest ones:

1. **State Representation**: We track the remainder when dividing by N, not the actual number (to avoid overflow)
2. **BFS Approach**: Start with remainder 1 (from number "1"), then try appending 0 or 1
3. **Remainder Tracking**: For a current remainder `r`, appending digit `d` gives new remainder `(r×10 + d) % N`
4. **Termination**: When remainder becomes 0, we found our answer

## Key Insights

- We only need to track remainders modulo N (at most N different states)
- BFS ensures we find the lexicographically smallest (and hence numerically smallest) solution first
- We avoid computing actual large numbers by working with remainders

## Algorithm Steps

1. Initialize BFS queue with (remainder=1%N, quotient=1)
2. Mark remainder as visited to avoid cycles
3. For each state, try appending both '0' and '1':
   - New remainder = (current_remainder × 10 + digit) % N
   - If new remainder is 0, return the quotient
   - If new remainder not visited, add to queue
4. Continue until remainder 0 is found

## Time Complexity
O(N) - at most N different remainders to explore

## Space Complexity
O(N) - for the visited array and queue

## C++ Implementation

```cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

long long findSmallestQuotient(int n) {
    if (n == 1) return 1;
    
    // BFS to find the smallest number with only 1s and 0s that is divisible by n
    queue<pair<int, long long>> q; // (remainder, number so far)
    vector<bool> visited(n, false);
    
    q.push({1 % n, 1});
    visited[1 % n] = true;
    
    while (!q.empty()) {
        auto [rem, number] = q.front();
        q.pop();
        
        if (rem == 0) {
            return number / n;  // Return the quotient D = M/n
        }
        
        // Try appending 0
        int newRem0 = (rem * 10) % n;
        if (!visited[newRem0]) {
            visited[newRem0] = true;
            q.push({newRem0, number * 10});
        }
        
        // Try appending 1
        int newRem1 = (rem * 10 + 1) % n;
        if (!visited[newRem1]) {
            visited[newRem1] = true;
            q.push({newRem1, number * 10 + 1});
        }
    }
    
    return -1; // Should never reach here for valid inputs
}

int main() {
    int n;
    
    while (cin >> n && n != 0) {
        cout << findSmallestQuotient(n) << endl;
    }
    
    return 0;
}
```