#include <iostream>

int main()
{
    int sum = 0;

    int cnter = 50;
    while (cnter != 100) {
        sum += cnter;

        ++cnter;
    }

    std::cout << "sum - " << sum << '\n';
}
