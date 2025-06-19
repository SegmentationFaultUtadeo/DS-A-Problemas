#include <bits/stdc++.h>
#define endl "\n"

using namespace std;


int main(){
    short int n, k;
    ifstream input("input.txt", ios::in);
    ofstream output("output.txt", ios::out);
    input >> n >> k;
    int sum = 0;

    for(short int i = 0; i < n; i++){
        short int a_i;
        input >> a_i;
        short int iter = a_i - (3 * k);
        if (iter >= 0){
            sum += iter;
        }
        else {
            short int max = floor(a_i / k);
            sum += (a_i - (k * max));
        }
    }

    output << sum;
    input.close();
    output.close();
    return 0;

}
