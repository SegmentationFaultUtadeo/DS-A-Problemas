#include <iostream>
#include <bitset>

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

long long binpowmod(long long a, long long b, long long m){
    a %= m;
    long long res = 1;
    while (b > 0){
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
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
    std::cout << "Binpow con recursion: \n" << ((long long) binpow(2, 40)) << std::endl;
    std::cout << ((long long) binpowmod(2, 3, 5)) << std::endl;
    return 0;
}
