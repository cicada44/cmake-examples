#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

template <typename VALUE_T>
void elim_dups(vector<VALUE_T>& v)
{
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
}

int main()
{
    vector<int> v;

    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(v));

    elim_dups(v);

    copy(v.cbegin(), v.cend(), ostream_iterator<int>(cout, " "));
}
