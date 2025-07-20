#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    short int A, B, C;
    while (cin  >> A >> B >> C){
        int sum = A + B + C;
        cout << ((sum == 3 || sum == 0) ? "*" :
                 ((A + B == 2) || (A + B == 0)) ? "C" :
                 ((C + B == 2) || (C + B == 0)) ? "A" : "B" ) << endl;
    }

    return 0;
}
