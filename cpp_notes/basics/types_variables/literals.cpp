#include <iostream>

void notation()
{
    int i = 20;
    int i_8 = 020;
    int i_16 = 0x20;

    std::cout << "int (10): " << i << "\nint (8):  " << i_8
              << "\nint (16): " << i_16 << '\n';
}

void char_literal()
{
    // char literal
    char char_literal = 'a';

    // string literal
    char* string_literal = "string";

    std::cout << "char literal: " << char_literal
              << "\nstring literal: " << string_literal << '\n';
}

void nonprintable_characters()
{
    std::cout << "\\n - \n"
              << '\n'
              << "\\t - \t" << '\n'
              << "\\a - \a" << '\n'
              << "\\v - \v" << '\n'
              << "\\b - \b" << '\n'
              << "\\\" - \" " << '\n'
              << "\\\\ - \\" << '\n'
              << "\\? - \?" << '\n'
              << "\\' - \'" << '\n'
              << "\\r - \r" << '\n'
              << "\\f - \f" << '\n';
}

int main()
{
    // notation();
    // char_literal();
    nonprintable_characters();

    return 0;
}
