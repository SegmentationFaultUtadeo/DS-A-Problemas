#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    short int N; cin >> N;
    cin.ignore();
    string in;
    while (N--){
        getline(cin, in);
        if (in == "P=NP") cout << "skipped" << endl;
        else{
            cout << (stoi(in.substr(0, in.find("+"))) + stoi(in.substr(in.find("+") + 1, in.size()))) << endl;
        }
    }




    return 0;
}
