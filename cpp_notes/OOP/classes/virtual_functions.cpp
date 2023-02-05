#include <iostream>

#include <string>

using namespace std;

class A {
public:
    A() = default;

    virtual void print_a()
    {
        cout << a << '\n';
    }

    int a = 0;
};

// still polymorphic method
class B : public A {
public:
    B() = default;

    void print_a()
    {
        cout << a << '\n';
    }

    int a = 1;
};

// still polymorphic method
class C : public A {
public:
    C() = default;

    void print_a()
    {
        cout << a << '\n';
    }

    int a = 2;
};

int main()
{
    A a;

    a.print_a();

    C c;

    A& fake_a = c;

    fake_a.print_a();

    return 0;
}