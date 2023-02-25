#include <iostream>

#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};

    auto iter = v.begin();

    while (iter != v.end()) {
        if (*iter % 2) {
            iter = v.insert(iter, *iter);
        }
        ++iter;
    }

    for (const auto& c : v) {
        std::cout << c << '\n';
    }
}
