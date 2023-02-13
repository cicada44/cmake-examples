#include <iostream>

int main()
{
    int i = 10;
    double d = 5;

    i *= static_cast<int>(d);

    std::cout << "i - " << i << '\n';
}
