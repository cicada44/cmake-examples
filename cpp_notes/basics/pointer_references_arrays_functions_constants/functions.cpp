#include <iostream>

using namespace std;

// function to use as a pointer
int callbackme_sum(const int n1, const int n2)
{
    return n1 + n2;
}

// reloaded function func sum of 2 ints
int reloaded_sum(const int n1, const int n2)
{
    return n1 + n2;
}

// reloaded function func sum of 2 chars
int reloaded_sum(const char n1, const char n2)
{
    return n1 + n2;
}

// can't reload function of returned type of it
// char reloaded_sum(const int n1, const int n2) { return n1 + n2; }

int& gimme_local_ref()
{
    int n = 5;
    int& ref_n = n;

    return ref_n;
}

// can't do this (UB)
int& gimme_local_ref_2()
{
    int n = 5;
    return n;
}

// but we may do this!
const int& gimme_const_local_ref()
{
    int n = 5;
    const int& n1 = n;

    return n1;
}

int main()
{
    int (*func_pointer)(int n1, int n2) = &callbackme_sum;

    cout << "callback result for 1 & 2: " << func_pointer(1, 2) << '\n';

    cout << "calling reloaded function with 1 & 2: " << reloaded_sum(1, 2)
         << '\n';

    cout << "calling reloaded function with 'a' & 'b': "
         << reloaded_sum('a', 'b') << '\n';

    cout << "calling a function that returns a local reference: "
         << gimme_local_ref() << '\n';

    // cout << "calling a function that returns a local var as reference: "
    //  << gimme_local_ref_2() << '\n';

    cout << "calling a function that returns a const local reference: "
         << gimme_const_local_ref() << '\n';

    return 0;
}
