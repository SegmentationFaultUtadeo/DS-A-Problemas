#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main(){
    string T = "i love cs3233 competitive programming i also love algorithm";
    map<string, int> freq;
    string token;
    stringstream ss(T);
    vector<string> tokens;

    while (ss >> token) tokens.push_back(token);
    for (auto i : tokens) freq[i]++;

    for (auto i : freq) cout << "Key: " << i.first << " Value: " << i.second << endl;



    return 0;
}
