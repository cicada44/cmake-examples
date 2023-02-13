#include <iostream>

#include <string>

using namespace std;

int main()
{
    string s, sum;

    while (getline(std::cin, s)) {
        sum += s += ' ';
    }

    std::cout << sum << '\n';
}
