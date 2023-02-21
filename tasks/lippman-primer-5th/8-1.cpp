#include <iostream>

std::istream& read_all(std::istream& is)
{
    int n;
    while (!is.eof()) {
        is >> n;
        std::cout << n;
    }

    is.clear();

    return is;
}

int main()
{
    read_all(std::cin);
}
