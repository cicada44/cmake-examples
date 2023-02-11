#include <iostream>

using std::cout;

void begin_end_arrays()
{
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int* beg = std::begin(ia);
    int* last = std::end(ia);

    cout << "beg - " << beg << '\n';
    cout << "&ia[0] - " << &ia[0] << '\n';
    cout << "last - " << last << '\n';
    cout << "(&ia[9] + 1) - " << (&ia[9] + 1) << '\n';
}

void arithmetic()
{
    int ia[] = {1, 2, 3, 4, 5};

    int* p = ia + 4;

    cout << "*p - " << *p << '\n';
}

int main()
{
    // begin_end_arrays();
    // arithmetic();

    return 0;
}
