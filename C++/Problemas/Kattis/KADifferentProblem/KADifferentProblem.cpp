#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;


int main(){

    unsigned ll n1, n2;

    while (cin >> n1 >> n2){
        unsigned ll resultado = llabs(n1 - n2);
        cout << resultado << endl;
    }

    return 0;
}
