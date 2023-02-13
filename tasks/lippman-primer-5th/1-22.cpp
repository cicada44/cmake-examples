#include "Sales_item.hpp"

#include <iostream>

int main()
{
    Sales_item term, sum;

    while (std::cin >> term) {
        sum += term;
    }

    std::cout << "sum - " << sum << '\n';
}
