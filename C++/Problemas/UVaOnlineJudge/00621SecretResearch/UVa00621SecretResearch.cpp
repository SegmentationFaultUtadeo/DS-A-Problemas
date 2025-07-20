#include <bits/stdc++.h>
#define endl "\n"
using namespace std;


int main(){

    int n; cin >> n;


    string s;
    cin.ignore();
    while (n--){
        cin >> s;
        if (s == "1" || s == "4" || s == "78") cout << '+' << endl;
        else if (s.substr(s.size()-2) == "35") cout << '-' << endl;
        else if (s[0] == '9' && s[s.size() - 1] == '4') cout << '*' << endl;
        else if (s.substr(0, 3) == "190") cout << "?" << endl;
        else cout << "+" << endl;
    }





    return 0;
}
