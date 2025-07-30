#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c){
    int jumps = 0;
    unsigned long i = 0;

    while (i < (c.size()-2)){
        if (c[i+2] == 0){ jumps++; i+=2;}
        else {jumps++; i += 1;}
    }
    if (i == c.size()-2 && c[i] == 0) jumps++;

    return jumps;
}


int main(){
    int n; cin >> n;
    vector<int> c;
    for (int i = 0; i < n; ++i) { int temp; cin >> temp; c.push_back(temp);}

    cout << jumpingOnClouds(c) << endl;


    return 0;
}
