#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v = {1, 2, 3, 1, 0};
    int a = 0;
    for (int i : v) a |= i;
    cout << a << endl;

    return 0;
}
