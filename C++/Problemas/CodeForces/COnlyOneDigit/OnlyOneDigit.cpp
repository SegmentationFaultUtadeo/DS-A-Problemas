#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;

int main(){
    si T; cin >> T;
    cin.ignore();

    while (T--){
        string x;
        cin >> x;

        si y = 0;
        while (true){
            if (x.find(to_string(y)) == string::npos) y++;
            else {
              cout << y << endl;
              break;
            }
        }
    }

    return 0;
}
