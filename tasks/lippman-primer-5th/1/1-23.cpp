#include "Sales_item.hpp"

#include <iostream>

using namespace std;

int main()
{
    Sales_item term, sum, curr;

    if (cin >> curr) {
        int cnt = 1;
        while (cin >> term) {
            if (term.isbn() == curr.isbn()) {
                ++cnt;
            } else {
                cout << "isbn " << curr.isbn() << " occured " << cnt
                     << " times\n";
                cnt = 1;
                curr = term;
            }
        }
        cout << "isbn " << term.isbn() << " occured " << cnt << " times\n";
    }
}
