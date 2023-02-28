#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    auto c = [&n]() mutable -> bool {
        while (n > 0)
            --n;
        return (n == 0);
    };

    cout << c() << "\tn - " << n << '\n';
}
