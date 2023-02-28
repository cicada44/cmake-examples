#include "Sales_item.hpp"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<Sales_item> v{
            Sales_item("1-3"), Sales_item("1-2"), Sales_item("1-1")};

    // copy(istream_iterator<Sales_item>(cin),
    //  istream_iterator<Sales_item>(),
    //  back_inserter(v));

    stable_sort(
            v.begin(),
            v.end(),
            [](const Sales_item& si1, const Sales_item& si2) {
                return (si1.isbn() < si2.isbn());
            });

    copy(v.cbegin(), v.cend(), ostream_iterator<Sales_item>(cout, " "));
}
