#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;
typedef string str;

int main(){
    si n; cin >> n;
    bool check = true;
    for (si i = 1; i <= n; ++i){
        str temp; cin >> temp;
        if (temp == "mumble") continue;
        else if (stoi(temp) != i) {
            cout << "something is fishy" << endl;
            check = false;
            break;
        }
    }
    if (check) cout << "makes sense" << endl;


    return 0;
}
