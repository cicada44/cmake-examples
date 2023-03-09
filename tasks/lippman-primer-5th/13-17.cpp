#include <bits/stdc++.h>

using namespace std;

class numbered {
public:
    numbered() : uniq(0)
    {
    }

    numbered(const numbered& n) : uniq(n.uniq + 1)
    {
    }

    numbered& operator=(const numbered& n)
    {
        uniq += n.uniq + 1;

        return *this;
    }

    void print() const
    {
        cout << uniq << '\n';
    }

private:
    size_t uniq;
};

void f(const numbered& n)
{
    n.print();
}

int main()
{
    numbered a, b = a, c = b;

    f(a);
    f(b);
    f(c);
}
