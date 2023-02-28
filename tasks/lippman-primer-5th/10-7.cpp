#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    list<int> l;

    int i;

    while (cin >> i) {
        l.push_back(i);
    }

    copy(l.cbegin(), l.cend(), back_inserter(v));

    copy(v.cbegin(), v.cend(), ostream_iterator<int>(std::cout));

    cout << '\n';
}
