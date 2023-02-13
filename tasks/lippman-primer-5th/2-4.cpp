#include <iostream>

using std::cout;

int main()
{
    unsigned u = 10, u2 = 42;

    cout << u2 - u << '\n';
    cout << u - u2 << '\n';

    int i = 10, i2 = 42;

    cout << i2 - i << '\n';
    cout << i - i2 << '\n';
    cout << i - u << '\n';
    cout << u - i << '\n';
}
