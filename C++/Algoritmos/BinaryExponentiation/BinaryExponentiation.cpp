#include <iostream>
#include <bitset>

long long binpow_r(long long a, long long b){
    if (b == 0) return 1;
    long long res = binpow_r(a, b/2);
    if (b % 2) return res * res * a;
    else return res * res;
}

long long binpow(long long a, long long b){
    long long res = 1;
    long long counter = 0;
    while (b >0){
        std::bitset<16> binary(b);
        std::cout << binary.to_string() << std::endl;
        if (b & 1) res = res * a;
        a = a * a;
        counter++;
        b >>= 1;
    }
    std::cout << "count: " << counter << std::endl;
    return res;
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
    std::cout << ((long long) naivepow(2, 40)) << std::endl;
    return 0;
}
