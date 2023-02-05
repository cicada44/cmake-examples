#include <iostream>

class B {
public:
    virtual ~B() = default;
};

class Child : protected B {};

void check_child_B()
{
    // inaccessible!
    // B* b = new Child;
}

int main()
{
    return 0;
}