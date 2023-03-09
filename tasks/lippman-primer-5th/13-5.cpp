#include <bits/stdc++.h>

using namespace std;

class HasPtr {
public:
    HasPtr(const std::string& s = std::string()) : ps(new string(s)), i(0)
    {
        cout << "HasPtr()\n";
    }

    HasPtr(const HasPtr& s) : ps(new string(*s.ps)), i(s.i)
    {
        cout << "HasPtr(const HasPtr& s)\n";
    }

    HasPtr& operator=(const HasPtr& s)
    {
        cout << "HasPtr& operator=(const HasPtr& s)\n";

        delete ps;
        ps = new string(*s.ps);
        i = s.i;

        return *this;
    }

    ~HasPtr()
    {
        delete ps;
    }

    void print()
    {
        cout << *ps << '\n';
    }

private:
    std::string* ps;
    int i;
};

int main()
{
    HasPtr hp(string("string1"));
    HasPtr hcpy(hp);
    HasPtr hpassign;

    hpassign = hp;
}
