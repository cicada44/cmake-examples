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
    vector<int> v{1, 2, 3, 4, 5};

    vector<int>::size_type t = v.size();

    cout << "v.empty() - " << v.empty() << '\n';
    cout << "v.size() - " << v.size() << '\n';
    cout << "v[0] - " << v[0] << '\n';
    cout << "t - " << t << '\n';

    // Insert elements into vector after (v.begin() + 3)
    v.insert(v.begin() + 3, {9, 9, 9});
    cout << "v.insert(v.begin() + 3, {9, 9, 9}) - ";
    print_vec(v);

    // Makes elements in vector before (v.begin() + 3)
    v.emplace(v.begin() + 3, 0);
    cout << "v.insert(v.begin() + 3, 0) - ";
    print_vec(v);

    // Delete first 3 elements
    v.erase(v.begin(), v.begin() + 3);
    cout << "v.erase(v.begin(), v.begin() + 3) - ";
    print_vec(v);

    // Max size of vector
    cout << "v.max_size() - " << v.max_size() << '\n';

    // Clearing...
    v.clear();
    cout << "v.clear() - ";
    print_vec(v);
}

void comparasion_operators()
{
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{1, 2, 7};

    cout << "v1 == v2 - " << (v1 == v2) << '\n';
    cout << "v1 < v2 - " << (v1 < v2) << '\n';
    cout << "v1 > v2 - " << (v1 > v2) << '\n';
    cout << "v1 != v2 - " << (v1 != v2) << '\n';
}

int main()
{
    // push_vec_cin();
    // basic_methods();
    comparasion_operators();

    return 0;
}
