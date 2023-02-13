#include <iostream>

using std::cout;

void bit_shifts()
{
    int x = 127;

    for (int i = 0; i != 32; ++i) {
        int tmp = x & -x;
        cout << tmp << ' ';
        x <<= 1;
    }

    cout << '\n';

    x = -127;

    for (int i = 0; i != 32; ++i) {
        int tmp = x & -x;
        cout << tmp << ' ';
        x >>= 1;
    }

    cout << '\n';
}

int main()
{
    bit_shifts();

    return 0;
}
