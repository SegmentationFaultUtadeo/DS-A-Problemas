#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    ll f_1 = 1, f_2 = 2, suma  = 0;
    while(f_1 <= 4000000){
        if (!(f_1 % 2)) suma += f_1;
        cout << f_1 << " ";
        ll copy = f_2;
        f_2 = f_1 + f_2;
        f_1 = copy;
    }
    cout << endl << f_1 << endl;
    cout << endl << suma << endl;

    return 0;
}
