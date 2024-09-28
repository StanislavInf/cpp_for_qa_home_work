#include <iostream>
#include <cstdlib>
#include "square.h"

int main (int argc, char *argv[]) {
    std::cout << "Hello World!" << '\n';
    if (argc != 3) {
        std::cerr << "Provide exactly 2 arguments\n";
        return 1;
    }
    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    std::cout << square(a, b) << '\n';
    return 0;
}