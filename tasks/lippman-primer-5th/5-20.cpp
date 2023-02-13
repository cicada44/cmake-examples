#include <iostream>

#include <string>

#include <algorithm>

#include <vector>

using namespace std;

int main()
{
    vector<string> s_vec;

    string s;

    while (cin >> s) {
        if (find(s_vec.begin(), s_vec.end(), s) != s_vec.end()) {
            s_vec.push_back(s);
        } else {
            cout << s << '\n';
            break;
        }
    }
}
