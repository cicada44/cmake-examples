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

int main()
{
    return 0;
}
