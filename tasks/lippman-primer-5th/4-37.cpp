#include <iostream>

#include <string>

using namespace std;

int main()
{
    int i = 10;
    double d = 2;
    const string* ps = new string("qwertyui");
    char* pc = new char(5);
    pc = "abcde";
    void* pv;

    // pv = (void*)ps
    pv = const_cast<void*>(static_cast<const void*>(ps));

    // i = int (*pc)
    i = static_cast<int>(*pc);

    // pv = &d
    pv = static_cast<double*>(&d);

    // pc = (char*) pv
    pc = static_cast<char*>(pv);
}
