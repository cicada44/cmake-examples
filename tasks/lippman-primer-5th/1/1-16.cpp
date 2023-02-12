#include <iostream>

int main()
{
    int sum = 0;

    int term;

    while (std::cin >> term) {
        sum += term;
    }

    std::cout << "sum - " << sum << '\n';
}
