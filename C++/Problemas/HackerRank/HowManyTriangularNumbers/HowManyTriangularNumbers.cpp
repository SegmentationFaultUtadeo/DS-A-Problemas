#include <bits/stdc++.h>

using namespace std;



int main(){
    long long a, b;

    while(cin >> a >> b, (a + b) != 0){
        a = (ceill((-1 + sqrtl(1 + 8 * a))/2));
        b = (floorl((-1 + sqrtl(1 + 8 * b))/2));
        cout << (b - a + 1) << endl;
    }

    return 0;
}
