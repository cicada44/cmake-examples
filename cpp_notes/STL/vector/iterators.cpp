#include <iostream>

#include <iterator>

#include <vector>

#include <algorithm>

using std::cout;
using std::vector;

template <typename T>
void print_vec(const vector<T>& v)
{
    std::copy(v.begin(), v.end(), std::ostream_iterator<T>(cout, " "));
    cout << '\n';
}

void basics_of_iterators()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    vector<int>::iterator b = v.begin();
    vector<int>::iterator e = v.end();

    cout << "*b - " << *b << '\n';
    cout << "*e - " << *e << '\n';
    cout << "*(e-1) - " << *(e - 1) << '\n';

    while (b != e) {
        cout << *b++ << ' ';
    }
    cout << '\n';

    cout << "b - " << *b << '\n';
    cout << "e - " << *e << '\n';
}

void const_iterators()
{
    const vector<int> v_const{1, 2, 3, 4, 5};

    vector<int>::const_iterator b = v_const.begin();
    vector<int>::const_iterator e = v_const.end();

    for (; b != e; ++b) {
        cout << *b << ' ';
        // immutable
        // *b = 5;
    }
    cout << '\n';
}

void reverse_iterators()
{
    vector<int> v{1, 2, 3, 4, 5};

    for (auto i = v.rbegin(); i != v.rend(); ++i) {
        cout << *i << ' ';
    }
    cout << '\n';
}

void math_events()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    vector<int>::iterator b = v.begin();
    vector<int>::iterator e = v.end();

    if (b + 10 == e) {
        cout << "*e - " << *e << '\n';
        cout << "*(b+10) - " << *(b + 10) << '\n';
    }
}

int main()
{
    // basics_of_iterators();
    // const_iterators();
    reverse_iterators();
    // math_events();

    return 0;
}
