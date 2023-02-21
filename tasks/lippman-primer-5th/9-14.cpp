#include <iostream>

#include <string>

#include <list>

#include <vector>

using namespace std;

int main()
{
    list<const char*> lst{"abc", "def", "ghi"};
    vector<string> vec(lst.begin(), lst.end());

    for (const string& c : vec) {
        cout << c << ' ';
    }
}
