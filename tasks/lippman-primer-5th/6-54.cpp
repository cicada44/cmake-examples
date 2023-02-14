#include <iostream>

#include <vector>

using namespace std;

int f(int, int)
{
}

int sub(int n1, int n2)
{
    return n1 - n2;
}

int add(int n1, int n2)
{
    return n1 + n2;
}

int division(int n1, int n2)
{
    return n1 / n2;
}

int mul(int n1, int n2)
{
    return n1 * n2;
}

int main()
{
    vector<int (*)(int, int)> v{&sub, &add, &division, &mul};

    cout << "1 - " << v[0](1, 2) << '\n';
    cout << "2 - " << v[1](1, 2) << '\n';
    cout << "3 - " << v[2](1, 2) << '\n';
    cout << "4 - " << v[3](1, 2) << '\n';
}
