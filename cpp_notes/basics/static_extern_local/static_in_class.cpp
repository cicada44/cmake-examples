#include <iostream>

class info {
public:
    static int num;
};

int info::num = 1;

void make_the_same()
{
    // both objects have the same num
    info n1;
    n1.num = 1;
    info n2;

    ++n1.num;

    std::cout << "n1.num - " << n1.num << " n2.num - " << n2.num << '\n';
}

int main()
{
    make_the_same();
}
