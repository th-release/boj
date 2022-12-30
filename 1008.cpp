#include <iostream>

int main() {
    double a, b;
    std::cin >> a >> b;
    double result = a/b;
    std::cout.precision(12);
    std::cout << result;
    return 0;
}
