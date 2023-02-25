#include <list>

#include <iostream>

#include <deque>

#include <algorithm>

int main()
{
    std::list<int> l{1, 2, 3, 4, 5};

    std::deque<int> d1;
    std::deque<int> d2;

    for (const auto& c : l) {
        (c % 2 == 0) ? d2.emplace_back(c) : d1.emplace_back(c);
    }

    for (const auto& c : d1) {
        std::cout << c << ' ';
    }
    std::cout << '\n';

    for (const auto& c : d2) {
        std::cout << c << ' ';
    }
    std::cout << '\n';
}
