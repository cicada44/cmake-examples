#include <vector>

#include <iostream>

using namespace std;

int main()
{
    vector<int> v;

    int n;

    while (cin >> n) {
        v.push_back(n);
    }

    for (const auto& c : v) {
        cout << c << ' ';
    }

    cout << '\n';
}
