#include <iostream>

int main()
{
    int n = 0;

    // order of calculating is undefined ( {01, 00, 10} ???)
    std::cout << n << ++n << '\n';

    return 0;
}
