#include <bits/stdc++.h>
#define endl "\n"
using namespace std;


int main(){

    short int P, H, O;
    while (cin >> P >> H >> O){
        cout << ((H > O - P) ? "Hunters win!" :
                 "Props win!") << endl;
    }

    return 0;
}
