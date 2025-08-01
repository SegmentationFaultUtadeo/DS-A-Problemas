#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;
typedef string str;



int main(){

    // Solucion con arrays
    si arr[6][6];

    for (int i = 0; i < 6; ++i) for (int j = 0; j < 6; ++j) cin >> arr[i][j];

    int maxi = INT_MIN;
    for (int i = 1; i < 5; ++i)
        for (int j = 1; j < 5; ++j){
            int suma = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
            maxi = max(suma, maxi);
        }
    cout << maxi << endl;

    return 0;
}
