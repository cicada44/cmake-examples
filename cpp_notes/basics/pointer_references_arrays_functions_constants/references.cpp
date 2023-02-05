#include <iostream>

void init_ref()
{
    int b = 1;

    // ref to b (just only another name for b)
    int& ref_b = b;

    std::cout << "b - " << b << '\t' << "ref_b - " << ref_b << '\n';

    ref_b = 2;

    std::cout << "b - " << b << '\t' << "ref_b - " << ref_b << '\n';

    int a = 3;

    // new name for reference
    ref_b = a;

    std::cout << "a - " << a << '\t' << "ref_b - " << ref_b << '\n';
}

void const_ref()
{
    int b = 1;

    int& ref_b = b;

    // change value of b
    ref_b = 2;

    std::cout << "b - " << b << '\t' << "ref_b - " << ref_b << '\n';

    // const reference (reference to const variable)
    const int& const_ref_b = ref_b;

    // cannot change the value
    // const_ref_b = 3;

    std::cout << "b - " << b << '\t' << "const_ref_b - " << const_ref_b << '\n';

    const int const_b = 3;

    const int& ref_const_b = const_b;

    std::cout << "const_b - " << const_b << '\t' << "ref_constb - "
              << ref_const_b << '\n';

    // also able to make const reference to tmp value
    const int& ref_to_number = 5;

    const int* const pointer = new int(6);

    // also can use <auto>, but be carefully!
    const int* const& reference_to_completely_const_pointer = pointer;

    delete pointer;
}

int main()
{
    init_ref();

    const_ref();

    return 0;
}
