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

void init()
{
    vector<int> v1(10);
    vector<int> v2{10};
    vector<int> v3(10, 1);
    vector<int> v4{10, 1};

    print_vec(v1);
    print_vec(v2);
    print_vec(v3);
    print_vec(v4);
}

int main()
{
    init();

    return 0;
}
