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