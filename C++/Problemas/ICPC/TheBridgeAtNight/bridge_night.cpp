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