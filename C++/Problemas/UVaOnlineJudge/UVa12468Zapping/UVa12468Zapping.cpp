#include <bits/stdc++.h>
#define endl "\n"
using namespace std;


int main(){
    short int a, b;

    while (cin >> a >> b, a != -1){
        if ((((b - a) <= (99/2)) && (b-a >= 0)) || (((a - b) <= (99/2)) && (a - b >= 0))) cout << abs(b - a) << endl;
        else cout << (abs(abs(b-a)-99) + 1) << endl;
    }


    return 0;
}
