#include <iostream>

using std::cout;

int global = 5;

void local_vars()
{
    // change the global variable
    global += 1;

    cout << "Global variable - " << global << '\n';

    // local variable (on stack)
    int local = 1;

    cout << "Local variable - " << local << '\n';
}

void static_var()
{
    static int stat = 10;

    cout << "Static variable - " << stat << '\n';

    ++stat;
}

void static_from_prev_func()
{
    // inaccessible
    // cout << "Actual static variable - " << stat << '\n';

    // but

    static_var();
    static_var();

    static int stat = 9;

    cout << "stat - " << stat << '\n';
}

int main()
{
    local_vars();
    static_var();
    static_from_prev_func();

    return 0;
}
