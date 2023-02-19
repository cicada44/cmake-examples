#include <iostream>

void break_buffer()
{
    std::cout << std::endl;
    std::cout << std::unitbuf;
}

int main()
{
    break_buffer();
}
