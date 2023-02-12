#include <iostream>

int main()
{
    int n1, n2;

    std::cin >> n1 >> n2;

    while (n1 != n2) {
        std::cout << n1 << ' ';
        ++n1;
    }

    std::cout << '\n';
}
