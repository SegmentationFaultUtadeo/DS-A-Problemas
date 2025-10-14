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