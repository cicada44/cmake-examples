#include <iostream>

int main()
{
    int cnter = 10;

    while (cnter != -1) {
        std::cout << cnter << ' ';

        --cnter;
    }

    std::cout << '\n';
}
