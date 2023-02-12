#include <iostream>

int main()
{
    int sum = 0;

    for (int i = 50; i != 100; ++i) {
        sum += i;
    }

    std::cout << "sum - " << sum << '\n';

    for (int i = 10; i >= 0; --i) {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    int n1, n2;

    std::cin >> n1 >> n2;

    for (; n1 != n2; ++n1) {
        std::cout << n1 << ' ';
    }

    std::cout << '\n';
}
