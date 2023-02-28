#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    fill_n(back_inserter(v), 10, 0);

    for (size_t i = 0; i != 10; ++i) {
        cout << v[i] << ' ';
    }

    cout << '\n';
}
