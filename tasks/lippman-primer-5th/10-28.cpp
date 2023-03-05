#include <algorithm>
#include <deque>
#include <forward_list>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> l;
    deque<int> d;
    forward_list<int> fl;

    copy(v.begin(), v.end(), front_inserter(fl));
    copy(v.begin(), v.end(), inserter(d, d.begin()));
    copy(v.begin(), v.end(), back_inserter(l));

    copy(fl.begin(), fl.end(), ostream_iterator<int>(cout));
    cout << '\n';
    copy(d.begin(), d.end(), ostream_iterator<int>(cout));
    cout << '\n';
    copy(l.begin(), l.end(), ostream_iterator<int>(cout));
    cout << '\n';
}
