#include <bits/stdc++.h>
using namespace std;


vector<int64_t> vec;
int64_t sucesion(int n){
    int to_ret = 1;
    if(n < 2){
        vec.push_back(to_ret);
        return to_ret;
    }
    to_ret = (2 * n) + sucesion(n - 2);
    vec.push_back(to_ret);
    return to_ret;
}

int main(){
    short int t; cin >> t;
    while (t--){
        int64_t numerador = 0;
        int64_t denominador = 0;
        int64_t n; cin >> n;
        int64_t upper_bound ;
        int64_t lower_bound;
        sucesion(4580);
        int m = 0;
        int i = 0;
        while(true) {
            upper_bound = vec[i] + i;
            lower_bound = vec[i] - i;
            if (n >= lower_bound && n <= upper_bound) {
                m = i*2;
                break;
            }
            else if(n <= lower_bound){
                upper_bound = lower_bound - 1;
                lower_bound = upper_bound - ((i*2) - 1);
                if(n >= lower_bound && n <= upper_bound) {
                    m = ((i*2) - 1);
                    break;
                }
            }
            i++;
        }
        if(m % 2 == 0){ //De max a min
            int64_t val = n - vec[m / 2]; //Centro = m+1/m+1, de max a min
            numerador = (m / 2) + 1;
            denominador = (m / 2) + 1;
            numerador += val;
            denominador -= val;
            if(val < 0) {
                int64_t aux = numerador;
                numerador = denominador;
                denominador = aux;
            }
            else{
                int64_t aux = denominador;
                denominador = numerador;
                numerador = aux;
            }
        }
        else {
            denominador = 1 + (abs(upper_bound - n));
            numerador =  (m + 1) - (abs(upper_bound - n));
        }
        cout << "TERM " << n << " IS " << numerador << "/" << denominador << endl;
    }
}
