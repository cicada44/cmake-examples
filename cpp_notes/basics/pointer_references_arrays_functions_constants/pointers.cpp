#include <iostream>

void init_and_output_pointer()
{
    // define pointer with new() - *pointer = 0
    int* pointer = new int();

    std::cout << *pointer << '\n';

    // clearing memory
    delete pointer;
}

void init_constans_pointers()
{
    // pointer to constant (impossible to change the keeping value)
    const int* unchangable_value_pointer = new int(1);
    const int* unchangable_value_pointer_2 = new int(2);

    // impossible
    // *pointer = 2;

    // output pointer value and it's address
    std::cout << "value: " << *unchangable_value_pointer
              << "\taddress: " << unchangable_value_pointer << '\n';

    // but can change the address
    unchangable_value_pointer = unchangable_value_pointer_2;

    // output changed pointer value and it's address
    std::cout << "value: " << *unchangable_value_pointer
              << "\taddress: " << unchangable_value_pointer << '\n';

    // constant pointer (impossible to change address of pointer)
    int* const unchangeble_address_pointer = new int(2);
    int* const unchangeble_address_pointer_2 = new int(2);

    // output pointer value and it's address
    std::cout << "value: " << *unchangeble_address_pointer
              << "\taddress: " << unchangeble_address_pointer << '\n';

    // impossible
    // unchangeble_address_pointer = unchangeble_address_pointer_2;

    // but can change the value
    *unchangeble_address_pointer = 3;

    // output changed pointer value and it's address
    std::cout << "value: " << *unchangeble_address_pointer
              << "\taddress: " << unchangeble_address_pointer << '\n';

    // completely unchangable pointer
    const int* const completely_unchangable_pointer = new int(4);

    // output changed pointer value and it's address
    std::cout << "value: " << *completely_unchangable_pointer
              << "\taddress: " << completely_unchangable_pointer << '\n';

    // clear all memory
    delete unchangable_value_pointer;

    // CE, same address of 2 pointers, leak 4B
    // delete unchangable_value_pointer_2;

    delete unchangeble_address_pointer;
    delete unchangeble_address_pointer_2;

    delete completely_unchangable_pointer;
}

void wrong_actions_with_pointers()
{
    // uninitialized pointer
    int* up;

    // wrong type of new call
    // int* wp = new double();

    // it's an array
    int* ap = new int[5];

    // new ---> delete, new[] ---> delete[] , *alloc --> free
    // ERROR!
    delete ap;
}

void passing_pointer_to_func(int* a)
{
    // changes value
    *a = -1;

    std::cout << "\nPOINTER IN FUNCTION\n"
              << "value: " << *a << "\taddress: " << a << '\n';
}

void functions_and_pointers()
{
    std::cout << "\nPASSING POINTER BY VALUE\n";

    int* changabel_p = new int(1);

    std::cout << "\nPOINTER IN CALLING FUNCTION\n"
              << "value: " << *changabel_p << "\taddress: " << changabel_p
              << '\n';

    passing_pointer_to_func(changabel_p);

    std::cout << "\nCHANGED POINTER IN CALLING FUNCTION\n"
              << "value: " << *changabel_p << "\taddress: " << changabel_p
              << '\n';
}

int main()
{
    // init_and_output_pointer();
    // init_constans_pointers();
    // wrong_actions_with_pointers();
    functions_and_pointers();

    return 0;
}
