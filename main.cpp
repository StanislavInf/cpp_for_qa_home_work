#include <iostream>
#include <cstdlib>
#include "square.h"
// int argc, char *argv[]
int main (int argc, char *argv[]) {
    std::cout << "Hello World!";
    if (argc != 3) {
        std::cerr << "Provide exactly 2 arguments\n";
        return 1;
    }
    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    std::cout << square(a, b) << '\n';
//    int a;
//    int b;
//    std::cin >> a >> b;
//    if (a == 0 || b == 0) {
//        return 0;
//    }
//    std::cout << square(a, b);
    return 0;
}