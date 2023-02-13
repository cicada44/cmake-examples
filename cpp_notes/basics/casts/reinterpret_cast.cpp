#include <iostream>

using namespace std;

void reint()
{
    int* b = new int();
    char* cstr = new char(10);
    cstr = "1234";

    b = reinterpret_cast<int*>(cstr);

    cout << *b << '\n';
}

int main()
{
    reint();
}
