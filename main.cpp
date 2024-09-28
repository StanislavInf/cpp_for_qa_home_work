#include <iostream>
#include "square.h"

int main() {
    int a;
    int b;
    std::cin >> a >> b;
    if (a == 0 || b == 0) {
        return 0;
    }
    std::cout << square(a, b);
    return 0;
}