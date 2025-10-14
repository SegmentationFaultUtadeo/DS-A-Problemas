# Arctic Virus - Solution

## Problem Analysis

This problem asks us to determine if a given DNA sequence follows a specific context-free grammar that defines the Arctic Virus. The grammar is:

φ ::= A | T | φC | Aφ | Aφ⁻¹ | Gφ⁻¹C

Where:
- A and T are simple (base) cases
- φC means appending C to the end of a virus φ
- Aφ means prepending A to the beginning of a virus φ  
- Aφ⁻¹ means prepending A to the beginning of the reverse of a vi

rus φ
- Gφ⁻¹C means wrapping the reverse of a virus φ with G at the beginning and C at the end

## Solution Strategy

We use a recursive approach to check if a string matches the grammar:

1. **Base cases**: If the string is "A" or "T", it's a simple virus
2. **φC case**: If string ends with 'C', recursively check if the remaining prefix is a virus
3. **Aφ case**: If string starts with 'A', recursively check if the remaining suffix is a virus
4. **Aφ⁻¹ case**: If string starts with 'A', reverse the remaining suffix and check if it's a virus
5. **Gφ⁻¹C case**: If string starts with 'G' and ends with 'C', reverse the middle part and check if it's a virus

The algorithm tries all possible grammar rules and returns true if any of them succeed.

## Time Complexity
O(n × 2^n) in the worst case due to potential exponential branching, but typically much better in practice.

## Space Complexity  
O(n) for the recursion stack and string operations.

## C++ Implementation

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isVirusRecursive(const string& s) {
    int n = s.length();
    if (n == 0) return false;
    
    // Base cases: simple forms
    if (s == "A" || s == "T") return true;
    
    // Try φC: virus ends with C
    if (s[n-1] == 'C') {
        if (isVirusRecursive(s.substr(0, n-1))) return true;
    }
    
    // Try Aφ: virus starts with A
    if (s[0] == 'A' && n > 1) {
        if (isVirusRecursive(s.substr(1))) return true;
    }
    
    // Try Aφ⁻¹: starts with A, reverse the rest
    if (s[0] == 'A' && n > 1) {
        string rest = s.substr(1);
        reverse(rest.begin(), rest.end());
        if (isVirusRecursive(rest)) return true;
    }
    
    // Try Gφ⁻¹C: starts with G, ends with C, reverse middle
    if (n >= 3 && s[0] == 'G' && s[n-1] == 'C') {
        string middle = s.substr(1, n-2);
        reverse(middle.begin(), middle.end());
        if (isVirusRecursive(middle)) return true;
    }
    
    return false;
}

int main() {
    int n;
    string s;
    
    while (cin >> n >> s) {
        if (s == "A" || s == "T") {
            cout << "simple" << endl;
        } else if (isVirusRecursive(s)) {
            cout << "mutation" << endl;
        } else {
            cout << "doomed" << endl;
        }
    }
    
    return 0;
}
```

