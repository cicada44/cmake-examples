#include <iostream>

#include <string>

using std::cout;
using std::string;

void operators()
{
    string s1("some_value");
    string s2("some_value_2");

    cout << "s1 > s2 - " << (s1 > s2) << '\n';
    cout << "s1 == s2 - " << (s1 == s2) << '\n';
    cout << "s1 <= s2 - " << (s1 <= s2) << '\n';
}

int main()
{
    operators();

    return 0;
}
