#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, bool> m{{10, 1}, {100, 1}, {1000, 0}};

    m.begin()->second = 0;

    for (const auto& c : m) {
        cout << c.first << ' ' << c.second << '\n';
    }
}
