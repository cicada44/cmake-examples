#include <iostream>

#include <string>

using std::cout;
using std::string;

void basic_methods()
{
    string s("some_value");

    cout << "s.empty() - " << s.empty() << '\n';
    cout << "s.size() - " << s.size() << '\n';
}

int main()
{
    basic_methods();

    return 0;
}
