#include <iostream>

#include <map>

void size_of_basic_types()
{
    std::cout << "bool - " << sizeof(bool) << '\n'
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

    std::cout << "unsgned n: " << n << '\n' << "n - 2" << n - 2 << '\n';
}

void initialisation_types()
{
    int unit1 = 0;
    int unit2 = {0};
    int unit3{0};
    int unit4(0);
}

int main()
{
    // size_of_basic_types();
    // int_overflow();
    initialisation_types();

    return 0;
}
