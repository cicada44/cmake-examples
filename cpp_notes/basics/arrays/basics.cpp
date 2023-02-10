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
}

int main()
{
    return 0;
}
