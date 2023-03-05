#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    list<int> l;

    copy(v.rbegin() + 3, v.rend() - 3, back_inserter(l));

    copy(l.begin(), l.end(), ostream_iterator<int>(cout));
}
