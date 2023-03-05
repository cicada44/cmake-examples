#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <string>

using namespace std;

auto f1 = [](char& c) { c = tolower(c); };
// f2 = [](char& c) { c = tolower(c); };

int main()
{
    map<string, size_t> p;

    istream_iterator<string> is_iter_string(cin), eof_s;

    while (is_iter_string != eof_s) {
        string pure = *is_iter_string;

        for_each(pure.begin(), pure.end(), f1);

        pure.erase(
                remove_if(
                        pure.begin(),
                        pure.end(),
                        [](const char& c) { return ispunct(c); }),
                pure.end());

        p[pure]++;
        is_iter_string++;
    }

    cout << "OUTPUT\n";

    for (const auto& c : p) {
        cout << c.first << ' ' << c.second << '\n';
    }
}
