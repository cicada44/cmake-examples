#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

void elim_dups(vector<int>& v)
{
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
}

bool is_shorter(int n1, int n2)
{
    return (n1 < n2);
}

int main()
{
    vector<int> v;

    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(v));

    stable_sort(v.begin(), v.end(), is_shorter);

    elim_dups(v);

    copy(v.cbegin(), v.cend(), ostream_iterator<int>(cout, " "));
}
