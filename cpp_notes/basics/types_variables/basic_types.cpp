#include <iostream>

#include <map>

using std::cout;

void size_of_basic_types()
{
    cout << "bool - " << sizeof(bool) << '\n'
         << "char - " << sizeof(char) << '\n'
         << "wchar_t - " << sizeof(wchar_t) << '\n'
         << "char16_t - " << sizeof(char16_t) << '\n'
         << "char32_t - " << sizeof(char32_t) << '\n'
         << "short - " << sizeof(short) << '\n'
         << "int - " << sizeof(int) << '\n'
         << "long - " << sizeof(long) << '\n'
         << "long long - " << sizeof(long long) << '\n'
         << "float - " << sizeof(float) << '\n'
         << "double - " << sizeof(double) << '\n'
         << "long double - " << sizeof(long double) << '\n';
}

void int_overflow()
{
    unsigned n = 1;

    cout << "unsgned n: " << n << '\n' << "n - 2" << n - 2 << '\n';
}

void initialisation_types()
{
    int unit1 = 0;
    int unit2 = {0};
    int unit3{0};
    int unit4(0);
}

void basic_constants()
{
    int n = 5;
    ++n;

    const int m = 5;
    // can't update value
    // ++m;
}

void type_alias()
{
    typedef double same_of_double;

    same_of_double d = 1.11;

    cout << "d - " << d << '\n';

    using same_of_double_2 = double;

    same_of_double_2 d2 = 2.22;

    cout << "d2 - " << d2 << '\n';
}

int main()
{
    // size_of_basic_types();
    // int_overflow();
    // initialisation_types();
    // basic_constants();
    type_alias();

    return 0;
}
