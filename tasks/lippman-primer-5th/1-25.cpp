#include "Sales_item.hpp"

#include <iostream>

using namespace std;

int main()
{
    Sales_item total;

    if (cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                cout << total << '\n';
                total = trans;
            }
        }
    } else {
        cerr << "No data?\n";
    }
}
