#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

    int suma = 0;
    for(int i = 1; i < 1000; ++i){
        if (!(i % 3) || !(i % 5))
            suma += i;
    }

    cout << suma << endl;

    return 0;
}
