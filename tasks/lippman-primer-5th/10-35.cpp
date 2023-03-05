#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5};

    for (auto i = v.end() - 1; i != v.begin() - 1; --i) {
        cout << *i << ' ';
    }

    cout << '\n';
}
