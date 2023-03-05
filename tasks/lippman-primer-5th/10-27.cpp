#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 1, 4, 5};
    list<int> l;

    unique_copy(v.begin(), v.end(), back_inserter(l));

    copy(l.begin(), l.end(), ostream_iterator<int>(cout));
}
