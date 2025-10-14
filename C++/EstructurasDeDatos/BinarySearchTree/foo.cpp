#include <iostream>

int main(){
    int a = 2;
    int b = 4;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;


    int c = 2;
    int d = 4;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    c = c ^ d;
    d = c ^ d;
    c = c ^ d;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;

}
