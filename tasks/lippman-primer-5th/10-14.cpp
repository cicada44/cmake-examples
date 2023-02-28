#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    auto x = [](const int x, const int y) { return x < y; };

    cout << x(1, 0) << '\n';
}
