#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int s(unsigned long long n){
    int cnt = 0;
    while(n){
        cnt += n % 2;
        n /= 2;
    }
    return cnt;
}

long long f(unsigned long long n){
    if (n < 1) return 0;
    if (n % 2)
        return 2 * f(n/2) + (n + 1) / 2;
    return f(n-1)+ s(n);
}


int main(){

    unsigned long long A, B;
    while(cin >> A >> B){
        unsigned long long res = f(B) - f(A-1);
        cout << res << endl;
    }



return 0;
}
