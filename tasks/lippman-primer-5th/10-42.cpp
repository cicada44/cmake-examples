#include <iostream>
#include <list>

using std::list;

void elim_dups(list<int>& v)
{
    v.sort();
    v.unique();
    // v.erase(unique(v.begin(), v.end()), v.end());
}

int main()
{
    list<int> l{6, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 1};

    elim_dups(l);

    for (const auto& c : l) {
        std::cout << c << '\n';
    }
}
