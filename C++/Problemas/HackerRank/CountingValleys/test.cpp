#include <bits/stdc++.h>
using namespace std;

map<char, int> m{
{'D' , -1},
{'U', 1}
};


int solu(string str){
    int valleys = 0;
    int sea_level = 0;
    for (char i : str){
        if ((sea_level < 0) && (sea_level + m[i] >= 0)) valleys++;
        sea_level += m[i];
    }

    return valleys;
}
int main(){
    int n; cin >> n;
    cin.ignore();
    string str; getline(cin, str);

    cout << solu(str) << endl;


    return 0;
}
