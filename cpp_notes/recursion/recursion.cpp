#include <iostream>

#include <string>

#include <vector>

// linear recursion
int sum(int arr[], size_t size)
{
    if (size == 0) {
        return arr[0];
    }

    return arr[size] + sum(arr, size - 1);
}

size_t counter = 0;

// tree-view recursion
int fib(int n)
{
    if (n < 2) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

// sum function with recursion
int sum(int a, int b)
{
    return (!b) ? a : sum(++a, --b);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout << sum(arr, 4) << '\n';

    std::cout << fib(12) << '\n';

    std::cout << sum(5, 10) << '\n';

    return 0;
}
