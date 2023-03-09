#include <iostream>
#include <memory>
#include <vector>

using namespace std;

using v = shared_ptr<vector<int>>;

v alloc_v()
{
    v vec = make_shared<vector<int>>();
    return vec;
}

v assing_v(v vec)
{
    int n;

    while (cin >> n) {
        vec->push_back(n);
    }

    return vec;
}

v print_v(v vec)
{
    for (const auto& c : *vec) {
        cout << c << ' ';
    }

    cout << '\n';

    return vec;
}

int main()
{
    print_v(assing_v(alloc_v()));
}
