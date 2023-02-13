#include <iostream>

int main()
{
    int n1, n2;

    std::cin >> n1 >> n2;

    try {
        int n3 = n1 / n2;
    } catch (const std::exception& ex) {
        std::cerr << ex.what() << '\n';
    }
}
