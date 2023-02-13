#include <vector>

#include <iostream>

using namespace std;

bool is_pref(const vector<int>& v1, const vector<int>& v2)
{
    return (*(v1.begin()) == *(v2.begin())) ? true : false;
}

int main()
{
    cout << is_pref({1, 2, 3, 4}, {2, 2}) << '\n';
}
