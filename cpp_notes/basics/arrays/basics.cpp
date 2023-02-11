#include <iostream>

using std::cout;

void init()
{
    unsigned cnt = 42;
    constexpr unsigned sz = 42;

    int arr[cnt];
    unsigned arr_u[sz];
}

void pointers_refs()
{
    int arr[10];

    int(*Parray)[10] = &arr;

    int(&arr_ref)[10] = arr;

    int arr_n[3];

    int* arr_p = arr_n;

    cout << "arr_r - " << arr_p << '\n';
    cout << "arr_r - " << &arr_n[0] << '\n';
}

int main()
{
    // init();
    pointers_refs();

    return 0;
}
