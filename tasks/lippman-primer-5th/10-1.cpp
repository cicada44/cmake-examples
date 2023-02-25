#include <iostream>

#include <algorithm>

#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};

    std::cout << std::count(v.begin(), v.end(), 2) << '\n';
}
