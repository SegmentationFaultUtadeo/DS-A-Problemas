#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    string str; getline(cin, str);
    stringstream ss(str);
    string token;
    vector<string> tokens;

    while (ss >> token) tokens.push_back(token);

    cout << "Sentence en el orden de llegada:" << endl;
    for (auto i : tokens) cout << i << " ";
    cout << endl;


    sort(tokens.begin(), tokens.end());

    cout << "Sentence ya ordenada:" << endl;

    for (auto i : tokens) cout << i << " ";
    cout << endl;



    return 0;
}
