#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    map<string, vector<string>> families;

    bool opt;

    while (cin >> opt) {
        string lastname;

        cout << "INPUT LASTNAME: ";
        cin >> lastname;

        if (opt == 0) {
            families[lastname];
        }

        if (opt == 1) {
            if (families.count(lastname) == 0) {
                cout << "THIS LASTNAME DOES NOT EXIST\n";
                continue;
            }

            string children;

            cout << "INPUT NAMES OF CHILDREN\n";

            while (cin >> children) {
                if (children == "END") {
                    break;
                }
                families[lastname].push_back(children);
            }
        }
    }

    for (const auto& c : families) {
        cout << "LASTNAME - " << c.first << '\t';
        cout << "CHILDREN NAMES: ";
        for (const auto& c : c.second) {
            cout << c << ' ';
        }
        cout << '\n';
    }

    cout << '\n';
}
