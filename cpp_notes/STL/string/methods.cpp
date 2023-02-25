#include "colors.hpp"

#include <string>

#include <iostream>

using std::cout;
using std::string;

void empty()
{
    cout << BOLD_GREEN_CODE << "\t-----EMPTY-----\n\n" << NORMAL_CODE;

    // Normal string
    {
        cout << YELLOW_CODE << "\tNormal string\n\n" << NORMAL_CODE;

        string s("some_value");

        cout << "s - " << s << '\n';
        cout << "s.empty() - " << s.empty() << '\n';
    }
    cout << '\n';

    // Empty string
    {
        cout << YELLOW_CODE << "\tEmpty string\n\n" << NORMAL_CODE;

        string s;

        cout << "s - " << s << '\n';
        cout << "s.empty() - " << s.empty() << '\n';
    }
    cout << '\n';

    cout << "\n\n";
}

void size()
{
    cout << BOLD_GREEN_CODE << "\t-----SIZE-----\n\n" << NORMAL_CODE;

    // Normal string
    {
        cout << YELLOW_CODE << "\tNormal string\n\n" << NORMAL_CODE;

        string s("some_value");

        cout << "s - " << s << '\n';
        cout << "s.size() - " << s.size() << '\n';
    }
    cout << '\n';

    // Empty string
    {
        cout << YELLOW_CODE << "\tEmpty string\n\n" << NORMAL_CODE;

        string s;

        cout << "s - " << s << '\n';
        cout << "s.size() - " << s.size() << '\n';
    }
    cout << '\n';

    cout << "\n\n";
}

void begin_end()
{
    cout << BOLD_GREEN_CODE << "\t-----BEGIN END-----\n\n" << NORMAL_CODE;

    // Normal string
    {
        cout << YELLOW_CODE << "\tNormal string\n\n" << NORMAL_CODE;

        string s("some_value");

        cout << "s - " << s << '\n';
        *s.begin() = 'g';
        cout << "*s.begin() - " << *s.begin() << '\n';
        cout << "*s.end() - " << *s.end() << '\n';
        cout << "s.begin() != s.end() - " << (s.begin() != s.end()) << '\n';
        cout << "s.begin() + s.size() == s.end() - "
             << (s.begin() + s.size() == s.end()) << '\n';
        cout << "*(s.end() - 1) - " << *(s.end() - 1) << '\n';
    }
    cout << '\n';

    // Empty string
    {
        cout << YELLOW_CODE << "\tEmpty string\n\n" << NORMAL_CODE;

        string s;

        cout << "s - " << s << '\n';
        cout << "*s.begin() - " << *s.begin() << '\n';
        cout << "*s.end() - " << *s.end() << '\n';
        cout << "s.begin() != s.end() - " << (s.begin() != s.end()) << '\n';
        cout << "s.begin() + s.size() == s.end() - "
             << (s.begin() + s.size() == s.end()) << '\n';
        cout << "*(s.end() - 1) - " << *(s.end() - 1) << '\n';
    }
    cout << '\n';

    cout << "\n\n";
}

void cbegin_cend()
{
    cout << BOLD_GREEN_CODE << "\t-----CBEGIN CEND-----\n\n" << NORMAL_CODE;

    // Normal string
    {
        cout << YELLOW_CODE << "\tNormal string\n\n" << NORMAL_CODE;

        string s("some_value");

        cout << "s - " << s << '\n';
        cout << "*s.cbegin() - " << *s.cbegin() << '\n';
        cout << "*s.cend() - " << *s.cend() << '\n';
        cout << "*(s.cend() - 1) - " << *(s.cend() - 1) << '\n';

        // Unable to change value iterator
        // *s.cbegin() = 'g';
        // *s.cend() = 'g';
    }
    cout << '\n';

    cout << "\n\n";
}

void rbegin_rend()
{
    cout << BOLD_GREEN_CODE << "\t-----RBEGIN REND-----\n\n" << NORMAL_CODE;

    // Normal string
    {
        cout << YELLOW_CODE << "\tNormal string\n\n" << NORMAL_CODE;

        string s("some_value");

        cout << "s - " << s << '\n';

        // Reverse version of begin, end
        *s.rbegin() = 'g';

        cout << "s - " << s << '\n';
        cout << "*s.rbegin() - " << *s.rbegin() << '\n';
        cout << "*s.rend() - " << *s.rend() << '\n';
    }
    cout << '\n';

    cout << "\n\n";
}

void crbegin_crend()
{
    cout << BOLD_GREEN_CODE << "\t-----CRBEGIN CREND-----\n\n" << NORMAL_CODE;

    // Normal string
    {
        cout << YELLOW_CODE << "\tNormal string\n\n" << NORMAL_CODE;

        string s("some_value");

        cout << "s - " << s << '\n';

        // Const + reverse version of begin, end
        *s.rbegin() = 'g';

        cout << "s - " << s << '\n';
        cout << "*s.crbegin() - " << *s.crbegin() << '\n';
        cout << "*s.crend() - " << *s.crend() << '\n';
    }
    cout << '\n';

    cout << "\n\n";
}

void lenght()
{
    cout << BOLD_GREEN_CODE << "\t-----LENGHT-----\n\n";

    // Normal string
    {
        cout << YELLOW_CODE << "\tNormal string\n\n" << NORMAL_CODE;

        string s("some_value_ыыы");

        cout << "s - " << s << '\n';

        // lenght in bytes
        cout << "s.lenght() - " << s.length() << '\n';
    }
    cout << '\n';

    // Empty string
    {
        cout << YELLOW_CODE << "\tEmpty string\n\n" << NORMAL_CODE;

        string s;

        cout << "s - " << s << '\n';

        // lenght in bytes
        cout << "s.lenght() - " << s.length() << '\n';

        s.reserve(100);

        cout << "s.lenght() - " << s.length() << '\n';
    }
    cout << '\n';

    cout << "\n\n";
}

void max_size()
{
    cout << BOLD_GREEN_CODE << "\t-----MAX SIZE-----\n\n" << NORMAL_CODE;

    // Normal string
    {
        cout << YELLOW_CODE << "\tNormal string\n\n" << NORMAL_CODE;

        string s("some_value");

        cout << "s.max_size() - " << s.max_size() << '\n';
    }
    cout << '\n';

    cout << "\n\n";
}

void resize()
{
    cout << BOLD_GREEN_CODE << "\t-----RESIZE-----\n\n" << NORMAL_CODE;

    // Normal string
    {
        cout << YELLOW_CODE << "\tNormal string\n\n" << NORMAL_CODE;

        string s("some_value");

        cout << "s - " << s << '\n';
        cout << "s.size() - " << s.size() << '\n';

        s.resize(15);

        cout << "s - " << s << '\n';
        cout << "s.size() - " << s.size() << '\n';

        s.resize(20, 'a');

        cout << "s - " << s << '\n';
        cout << "s.size() - " << s.size() << '\n';

        s.resize(5, 'a');

        cout << "s - " << s << '\n';
        cout << "s.size() - " << s.size() << '\n';
    }
    cout << '\n';

    // Empty string
    {
        cout << YELLOW_CODE << "\tEmpty string\n\n" << NORMAL_CODE;

        string s;

        cout << "s - " << s << '\n';
        cout << "s.size() - " << s.size() << '\n';

        s.resize(15);

        cout << "s - " << s << '\n';
        cout << "s.size() - " << s.size() << '\n';

        s.resize(20, 'a');

        cout << "s - " << s << '\n';
        cout << "s.size() - " << s.size() << '\n';

        s.resize(5, 'a');

        cout << "s - " << s << '\n';
        cout << "s.size() - " << s.size() << '\n';
    }
    cout << '\n';

    cout << "\n\n";
}

int main()
{
    // empty();
    // size();
    // begin_end();
    // cbegin_cend();
    // rbegin_rend();
    // crbegin_crend();
    // lenght();
    // max_size();
    resize();

    return 0;
}
