#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<const char*> v1{"a", "b", "c"};
    vector<const char*> v2{"a", "b", "c"};

    equal(v1.cbegin(), v1.cend(), v2.cbegin());
}
