#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5};

    copy(v.rbegin(), v.rend(), ostream_iterator<int>(cout));
}
