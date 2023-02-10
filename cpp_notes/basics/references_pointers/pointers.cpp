#include <iostream>

using std::cout;

void init_pointer()
{
    int n = 1;

    int* pointer_n = &n;

    cout << "pointer_n - " << *pointer_n << '\n';

    int* pointer_to_pointer = pointer_n;

    cout << "pointer_to_pointer - " << *pointer_to_pointer << '\n';

    int** pointer_double = &pointer_to_pointer;

    cout << "pointer_double - " << *pointer_double << '\n';
}

void uninitialized()
{
    int* uninit_pointer = nullptr;

    cout << "unitin_pointer - " << uninit_pointer << '\n';

    int* uninit_pointer_2 = NULL;

    cout << "unitin_pointer_2 - " << uninit_pointer_2 << '\n';

    int* uninit_pointer_3 = 0;

    cout << "unitin_pointer_3 - " << uninit_pointer_3 << '\n';
}

void void_pointer()
{
    int n;

    void* pointer = &n;

    cout << "pointer - " << pointer << '\n';
}

int main()
{
    // init_pointer();
    // uninitialized();
    // void_pointer();

    return 0;
}
