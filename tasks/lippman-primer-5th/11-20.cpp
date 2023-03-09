#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> m;

    string word;

    while (cin >> word) {
        ++m.insert({word, 0}).first->second;
    }

    for (const auto& c : m) {
        cout << c.first << ' ' << c.second << '\n';
    }
}
