#include <iostream>

using namespace std;

void void_to_unsigned()
{
    int d = 0;

    void* p = &d;

    unsigned* dv = static_cast<unsigned*>(p);

    cout << "*d - " << *dv << '\n';
}

int main()
{
    void_to_unsigned();
}
