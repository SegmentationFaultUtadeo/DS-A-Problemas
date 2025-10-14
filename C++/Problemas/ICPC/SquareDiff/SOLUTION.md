# Square Diff - Solution

## Problem Analysis

We need to determine if a positive integer N can be expressed as the difference of two squares: N = x² - y² where x and y are integers.

## Mathematical Insight

Using the algebraic identity: x² - y² = (x+y)(x-y)

Let a = x+y and b = x-y, then N = a × b

From these equations:
- x = (a+b)/2  
- y = (a-b)/2

For x and y to be integers, both (a+b) and (a-b) must be even, which means a and b must have the same parity (both even or both odd).

## Key Theorem

A positive integer N can be expressed as the difference of two squares if and only if N is NOT of the form 4k+2.

**Proof:**
1. If N is odd: N = 2m+1, we can write N = (m+1)² - m² ✓
2. If N ≡ 0 (mod 4): N = 4k, we can write N = (k+1)² - (k-1)² ✓  
3. If N ≡ 2 (mod 4): N = 4k+2
   - For N = ab with same parity factors, we need ab ≡ 0 or 1 (mod 4)
   - But 4k+2 ≡ 2 (mod 4), which is impossible ✗

Therefore, numbers of the form 4k+2 cannot be expressed as difference of squares.

## Algorithm

Simply check if N % 4 == 2:
- If yes, output "N" 
- If no, output "Y"

## Time Complexity
O(1) per test case

## Space Complexity
O(1)

## C++ Implementation

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    
    while (cin >> n && n != 0) {
        // A number can be expressed as x^2 - y^2 = (x+y)(x-y)
        // This means n = a * b where a = x+y and b = x-y
        // For this to have integer solutions: a >= b > 0 and a+b must be even
        // (since x = (a+b)/2 and y = (a-b)/2 must be integers)
        
        // Special case: if n is even and n/2 is even, then n = 4k
        // We can write n as (k+1)^2 - (k-1)^2 = 4k
        
        // General rule: n can be expressed as difference of squares 
        // if and only if n is NOT of the form 4k+2
        
        if (n % 4 == 2) {
            cout << "N" << endl;
        } else {
            cout << "Y" << endl;
        }
    }
    
    return 0;
}
```