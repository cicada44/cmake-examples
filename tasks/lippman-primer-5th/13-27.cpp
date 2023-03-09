#include <bits/stdc++.h>

using namespace std;

// void swap(HasPtr& h1, HasPtr& h2);

class HasPtr {
    friend void swap(HasPtr& h1, HasPtr& h2);

public:
    HasPtr(const std::string& s = std::string())
        : ps(new string(s)), i(0), refcnter(new size_t(1))
    {
        cout << "HasPtr()\n";
    }

    HasPtr(const HasPtr& s) : ps(new string(*s.ps)), i(s.i)
    {
        cout << "HasPtr(const HasPtr& s)\n";

        ++*s.refcnter;
    }

    HasPtr& operator=(HasPtr s)
    {
        cout << "HasPtr& operator=(const HasPtr& s)\n";

        ++*s.refcnter;

        if (--*refcnter == 0) {
            delete ps;
            delete refcnter;
        }

        swap(*this, s);

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
    size_t* refcnter;
};

void swap(HasPtr& h1, HasPtr& h2)
{
    HasPtr tmp = h1;
    h1.ps = h2.ps;
    h1.i = h2.i;
    h1.refcnter = h2.refcnter;
    h2.ps = tmp.ps;
    h2.i = tmp.i;
    h2.refcnter = tmp.refcnter;
}

int main()
{
    HasPtr hp(string("string1"));
    HasPtr hcpy(hp);
    HasPtr hpassign;

    hpassign = hp;
}
