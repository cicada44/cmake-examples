#include <iostream>

#include <string>

using std::cout;
using std::string;

void init_string()
{
    string s1;
    string s2(s1);
    string s3 = s1;
    string s4("value");
    string s5 = "value";
    string s6(10, 'c');

    cout << "s1 - " << s1 << '\n';
    cout << "s2 - " << s2 << '\n';
    cout << "s3 - " << s3 << '\n';
    cout << "s4 - " << s4 << '\n';
    cout << "s5 - " << s5 << '\n';
    cout << "s6 - " << s6 << '\n';
}

void input_string()
{
    string s;

    while (std::cin >> s) {
        cout << s << '\n';
    }

    string s2;

    while (std::getline(std::cin, s2, '\n')) {
        cout << s2 << '\n';
    }
}

int main()
{
    // init_string();
    // input_string();

    return 0;
}
