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