#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int y = 10;

    auto x = [y](const int x) -> int { return (x + y); };

    cout << x(123) << '\n';
}
