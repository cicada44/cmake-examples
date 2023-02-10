#include <iostream>

using std::cout;

void impossible()
{
    // int& ref_val2;
    // int& ref = 10;
}

void ref_init()
{
    int ival = 1024;

    cout << "ival - " << ival << '\n';

    int& ref_val = ival;

    cout << "ref_val - " << ref_val << '\n';
}

void references_to_pointers()
{
    int n = 5;

    int* pointer_n = &n;

    cout << "*pointer - " << *pointer_n << '\n';

    int*& ref_pointer_n = pointer_n;

    cout << "*ref_pointer_n - " << *ref_pointer_n << '\n';

    int*& ref_ref_pointer_n = ref_pointer_n;

    cout << "*ref_ref_pointer_n - " << *ref_ref_pointer_n << '\n';
}

void const_references()
{
    int n = 5;

    const int& const_ref = 4;

    cout << "const_ref - " << const_ref << '\n';

    const int* const& const const_ref_to_const_pointer_to_const = &n;

    cout << "const_ref_to_const_pointer_to_const - "
         << const_ref_to_const_pointer_to_const << '\n';
}

int main()
{
    // ref_init();
    // references_to_pointers();
    // const_references();

    return 0;
}
