#include <iostream>

void check_all_bits(std::istream& is)
{
    std::cout << "is.eof() - " << is.eof() << '\n'
              << "is.fail() - " << is.fail() << '\n'
              << "is.bad() - " << is.bad() << '\n'
              << "is.good() - " << is.good() << '\n';
}

int main()
{
    int m;

    std::cin >> m;

    check_all_bits(std::cin);
}
