#include <iostream>

void swap(int* n1, int* n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

int main()
{
    int n1 = 0, n2 = 1;

    swap(&n1, &n2);

    std::cout << n1 << ' ' << n2;
}
