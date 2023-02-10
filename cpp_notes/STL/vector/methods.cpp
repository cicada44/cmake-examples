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

void push_vec_cin()
{
    vector<int> v;
    int t;

    while (std::cin >> t) {
        v.push_back(t);
    }

    print_vec(v);
}

void basic_methods()
{
    vector<int> v(10);

    vector<int>::size_type t = v.size();

    cout << "v.empty() - " << v.empty() << '\n';
    cout << "v.size() - " << v.size() << '\n';
    cout << "v[0] - " << v[0] << '\n';
    cout << "t - " << t << '\n';
}

int main()
{
    // push_vec_cin();
    // basic_methods();

    return 0;
}
