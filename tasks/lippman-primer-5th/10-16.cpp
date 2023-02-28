#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void biggies(vector<string>& v, const vector<string>::size_type sz)
{
    std::sort(v.begin(), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    stable_sort(v.begin(), v.end(), [](const string& s1, const string& s2) {
        return s1.size() < s2.size();
    });

    auto st = find_if(v.begin(), v.end(), [sz](const string& s) {
        return (s.size() >= sz);
    });

    for_each(v.begin(), st, [](const string& s) { cout << s << '\n'; });
}

int main()
{
    vector<string> v{
            "eeeeee",
            "ddddd",
            "cccc",
            "bbb",
            "aa",
            "eeeeee",
            "ddddd",
            "cccc",
            "bbb",
            "aa"};

    biggies(v, 5);
}
