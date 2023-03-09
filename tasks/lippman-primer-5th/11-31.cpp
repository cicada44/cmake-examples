#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    multimap<string, vector<string>> m{
            {"Me", {"A", "B", "C"}},
            {"He", {"D", "E", "F"}},
            {"She", {"G"}},
            {"She", {"H"}},
            {"She", {"I"}}};

    auto c = m.equal_range("She");

    for (auto i = c.first; i != c.second; ++i) {
        for (const auto& n : i->second) {
            cout << n << '\n';
        }
    }
}
