#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    short int n; cin >> n;

    while (n--){
        short int x; cin >> x;
        if (x % 2 == 0){
            cout << x << " is even" << endl;
        }else{
            cout << x << " is odd" << endl;
        }
    }

    return 0;
}
