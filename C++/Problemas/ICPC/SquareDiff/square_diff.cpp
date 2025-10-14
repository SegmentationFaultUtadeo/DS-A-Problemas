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