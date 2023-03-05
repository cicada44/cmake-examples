#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;
    ifstream ifs("10-29.txt");
    istream_iterator<string> is_iter(ifs);

    copy(is_iter, istream_iterator<string>(), back_inserter(v));

    copy(v.begin(), v.end(), ostream_iterator<string>(cout, "\n"));
}
