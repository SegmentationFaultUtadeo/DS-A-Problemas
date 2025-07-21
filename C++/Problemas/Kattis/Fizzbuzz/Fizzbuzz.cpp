#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){

    short int x, y, n; cin >> x >> y >> n;

    for (int i = 1; i <= n; i++){
        if (!(i % x) && !(i % y)) cout << "FizzBuzz" << endl;
        else if (!(i % x)) cout << "Fizz" << endl;
        else if (!(i % y)) cout << "Buzz" << endl;
        else cout << i << endl;
    }

    return 0;
}
