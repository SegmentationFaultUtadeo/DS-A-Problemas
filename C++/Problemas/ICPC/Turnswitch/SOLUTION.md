# Turnswitch - Solution

## Problem Analysis

This is a **lights-out style puzzle** where:
- We have an N×N grid of switches (horizontal '-' or vertical '|')
- Pressing a switch toggles itself and all adjacent switches (up, down, left, right)
- Goal: Make all switches the same (either all horizontal or all vertical)
- Find the minimum number of presses needed

## Solution Strategy

Since N ≤ 10, we can use **brute force** to try all possible combinations of button presses.

### Key Insights

1. **Order doesn't matter**: Pressing switch A then B gives same result as B then A
2. **At most one press**: Pressing a switch twice cancels out, so each switch is pressed 0 or 1 times
3. **Two target states**: We need to try both "all horizontal" and "all vertical" as targets
4. **Binary representation**: Each press combination can be represented as a bitmask

### Algorithm Steps

1. **For each target state** (all '|' or all '-'):
   - Calculate initial difference matrix (1 where current ≠ target, 0 otherwise)
   
2. **Try all 2^(n²) press combinations**:
   - For each combination (represented as bitmask):
     - Apply all button presses to the difference matrix
     - Each press toggles the switch and its 4 neighbors
     - Count total number of presses
   
3. **Check if solved**: All positions in difference matrix should be 0

4. **Return minimum** presses across all successful combinations and both targets

### Press Effect Simulation

When pressing switch at position (i,j):
```cpp
state[i][j] ^= 1;           // Toggle self
if (i > 0) state[i-1][j] ^= 1;    // Toggle up
if (i < n-1) state[i+1][j] ^= 1;  // Toggle down  
if (j > 0) state[i][j-1] ^= 1;    // Toggle left
if (j < n-1) state[i][j+1] ^= 1;  // Toggle right
```

## Time Complexity
O(2^(n²) × n²) - try all combinations, each taking O(n²) to simulate

## Space Complexity  
O(n²) for storing the grid state

## C++ Implementation

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    
    while (cin >> n && n != 0) {
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }
        
        int minMoves = n * n + 1;
        
        // Try both target states: all horizontal and all vertical
        for (char target : {'|', '-'}) {
            // Calculate initial difference from target
            vector<vector<int>> diff(n, vector<int>(n, 0));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    diff[i][j] = (grid[i][j] != target) ? 1 : 0;
                }
            }
            
            // Try all possible button press combinations (2^(n*n) possibilities)
            for (int mask = 0; mask < (1 << (n * n)); mask++) {
                vector<vector<int>> state = diff;
                int moves = 0;
                
                for (int k = 0; k < n * n; k++) {
                    if (mask & (1 << k)) {
                        moves++;
                        int i = k / n;
                        int j = k % n;
                        
                        // Toggle the switch itself and adjacent switches
                        state[i][j] ^= 1;
                        if (i > 0) state[i-1][j] ^= 1;
                        if (i < n-1) state[i+1][j] ^= 1;
                        if (j > 0) state[i][j-1] ^= 1;
                        if (j < n-1) state[i][j+1] ^= 1;
                    }
                }
                
                // Check if all switches are in target state
                bool success = true;
                for (int i = 0; i < n && success; i++) {
                    for (int j = 0; j < n && success; j++) {
                        if (state[i][j] != 0) {
                            success = false;
                        }
                    }
                }
                
                if (success) {
                    minMoves = min(minMoves, moves);
                }
            }
        }
        
        cout << minMoves << endl;
    }
    
    return 0;
}
```