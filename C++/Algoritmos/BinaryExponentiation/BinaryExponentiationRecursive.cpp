#include <iostream>

long long binpow(long long a, long long b){
    if (b == 0) return 1;
    long long res = binpow(a, b/2);
    if (b % 2) return res * res * a;
    else return res * res;
}

long long binpowmod(long long a, long long b, long long m){
    a %= m;
    if (b == 0) return 1;
    long long res = binpowmod(a, b/2, m);
    if (b % 2 ) return res % m * res % m * a % m;
    else return res * res % m;
}


long long naivepow(long long a, long long b){
    long long res = 1;
    long long counter = 0;
    for (int i = 0; i < b; i++){
        res *= a;
        counter++;
    }
    std::cout << "counter: " << counter << std::endl;
    return res;
}


int main(){
    std::cout << ((long long) binpow(2, 40)) << std::endl;
    std::cout << ((long long) binpowmod(2, 2147483647, 13)) << std::endl;
    return 0;
}
