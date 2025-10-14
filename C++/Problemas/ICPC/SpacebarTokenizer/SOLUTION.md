# Spacebar Tokenizer - Solution

## Problem Analysis

We need to find the optimal way to tokenize a given string to maximize the total score, where:
- Each valid token has a predefined score
- Invalid tokens contribute 0 to the total score
- We want the maximum possible sum of token scores

This is a classic **dynamic programming** problem similar to word break, but with optimization for maximum score.

## Solution Strategy

We use **dynamic programming** where `dp[i]` represents the maximum score achievable for the substring `s[0...i-1]`.

### State Definition
- `dp[i]` = maximum score for tokenizing the first `i` characters of the string
- `dp[0] = 0` (empty string has score 0)

### Recurrence Relation
For each position `j` from 1 to n:
```
dp[j] = max(
    dp[j-1],                                    // Skip character j-1 (contributes 0)
    max(dp[k] + score(s[k...j-1])) for all k < j // Try all possible tokens ending at j-1
)
```

### Algorithm Steps
1. Initialize DP array with `dp[0] = 0`
2. For each ending position `j`:
   - Consider not including character `j-1` in any token: `dp[j] = dp[j-1]`
   - Try all possible starting positions `k < j`:
     - Extract substring `s[k...j-1]`  
     - If it's a valid token, update: `dp[j] = max(dp[j], dp[k] + score(token))`
3. Return `dp[n]`

## Example Walkthrough

For "ilovespacebartokenizer" with tokens:
- space: 5, bar: 7, spacebar: 13, tokenizer: 5, i: 2, love: 4

```
Position: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
String:     i l o v e s p a c e b  a  r  t  o  k  e  n  i  z  e  r
DP:       0 2 2 2 2 6 6 6 6 6 6 6  6  6  6  6  6  6  6  6  6  6  6
```

Key updates:
- `dp[1] = 2` (token "i")
- `dp[5] = 6` (token "love" from position 1-4)
- Further analysis would find "spacebar" and "tokenizer" tokens for optimal score of 24

## Time Complexity
O(n² × m) where n is string length and m is average token length

## Space Complexity
O(n) for the DP array + O(total token storage)

## C++ Implementation

```cpp
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m, s;
    
    while (cin >> m >> s && (m != 0 || s != 0)) {
        unordered_map<string, int> tokenScore;
        
        // Read token scores
        for (int i = 0; i < m; i++) {
            string token;
            int score;
            cin >> token >> score;
            tokenScore[token] = score;
        }
        
        // Process each sentence
        for (int i = 0; i < s; i++) {
            string sentence;
            cin >> sentence;
            int n = sentence.length();
            
            // DP array: dp[i] = maximum score for substring [0...i-1]
            vector<int> dp(n + 1, 0);
            
            for (int j = 1; j <= n; j++) {
                // Option 1: don't include position j-1 in any token
                dp[j] = dp[j-1];
                
                // Option 2: try all possible tokens ending at position j-1
                for (int k = 0; k < j; k++) {
                    string substr = sentence.substr(k, j - k);
                    if (tokenScore.count(substr)) {
                        dp[j] = max(dp[j], dp[k] + tokenScore[substr]);
                    }
                }
            }
            
            cout << dp[n] << endl;
        }
    }
    
    return 0;
}
```