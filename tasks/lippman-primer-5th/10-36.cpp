#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>

using namespace std;

int main()
{
    list<int> l{1, 2, 3, 0, 4, 5};

    cout << *find(l.rbegin(), l.rend(), 0) << '\n';
}
