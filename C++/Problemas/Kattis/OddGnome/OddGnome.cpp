#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;



int main(){

    si n; cin >> n;

    while (n--){
        si g; cin >> g;
        int arr[10000];
        for (si i = 0; i < g; i++){
            int temp; cin >> temp;
            arr[i] = temp;
        }
        si pos = 1;
        for (si i = 0; i < g-1; i++){
            int n1 = arr[i];
            int n2 = arr[i+1];
            if (n2 - n1 != 1) {pos++;break;}
            pos++;

        }
        cout << pos << endl;

    }



    return 0;
}
