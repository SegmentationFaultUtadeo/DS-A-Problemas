#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int N, Q;
    
    while (cin >> N >> Q && (N != 0 || Q != 0)) {
        // Determine which packages are active
        vector<bool> isActive(N + 1, false);
        
        // For each package size k, check if it should be active
        // A package k is active if there exists a valid pairing scheme
        // We use the fact that for sum to be power of 2, we need specific patterns
        
        // Key insight: k is active if k has an odd number of 1s in binary representation
        // when we consider k in context of powers of 2
        
        for (int k = 0; k <= N; k++) {
            // Count the number of 1-bits in k
            int ones = __builtin_popcount(k);
            isActive[k] = (ones % 2 == 1);
        }
        
        // Process queries
        string result = "";
        for (int i = 0; i < Q; i++) {
            int q;
            cin >> q;
            result += (isActive[q] ? 'A' : 'P');
        }
        
        cout << result << endl;
    }
    
    return 0;
}