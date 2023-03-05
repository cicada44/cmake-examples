#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main()
{
    istream_iterator<int> is_iter(cin);

    vector<int> v(is_iter, istream_iterator<int>());

    sort(v.begin(), v.end());

    unique_copy(v.begin(), v.end(), ostream_iterator<int>(cout));
}
