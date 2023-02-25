#include <list>

#include <iostream>

int main()
{
    std::list<int> d;

    int tmp;

    while (std::cin >> tmp) {
        d.emplace_back(tmp);
    }

    for (const auto& c : d) {
        std::cout << c << ' ';
    }

    std::cout << '\n';
}
