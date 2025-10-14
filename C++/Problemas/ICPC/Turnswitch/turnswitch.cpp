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