#include <iostream>

using namespace std;

void int_to_const()
{
    int n = 100;

    int& d = n;

    const int const_d = const_cast<const int&>(d);

    cout << "const_d - " << const_d << '\n';
}

int main()
{
    int_to_const();
}
