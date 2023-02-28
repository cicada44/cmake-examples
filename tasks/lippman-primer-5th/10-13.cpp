#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

bool g5(const string& s)
{
    return (s.size() > 5);
}

int main()
{
    vector<string> v{"aaaaaa", "eeeee", "dddddddd", "ccccccc", "b", "a"};

    // copy(istream_iterator<string>(cin),
    //      istream_iterator<string>(),
    //      back_inserter(v));

    // v.end() = partition(v.begin(), v.end(), g5);

    copy(v.cbegin(),
         static_cast<std::vector<string>::const_iterator>(
                 partition(v.begin(), v.end(), g5)),
         ostream_iterator<string>(cout, " "));
}
