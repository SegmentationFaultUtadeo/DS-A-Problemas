#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){

    short int x, y; cin >> x >> y;

    cout << ( (x > 0 && y > 0) ? 1 : (x < 0 && y > 0) ? 2 : (x < 0 && y < 0) ? 3 : 4  ) << endl;

    return 0;
}
