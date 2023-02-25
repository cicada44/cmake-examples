#include <iostream>

#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};

    auto begin = v.begin(), end = v.end();

    while (begin != end) {
        ++begin;
        v.insert(begin, 42);
        ++begin;
    }

    for (const auto& c : v) {
        std::cout << c << '\n';
    }
}
