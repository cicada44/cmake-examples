#include <iostream>

#include <string>

using namespace std;

int main()
{
    string s;

    // while (getline(std::cin, s)) {
    // std::cout << s << '\n';
    // }

    while (getline(std::cin, s, ' ')) {
        std::cout << s << '\n';
    }
}
