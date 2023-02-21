#include <iostream>

#include <sstream>

#include <vector>

#include <string>

#include <fstream>

using namespace std;

int main()
{
    fstream fstr("test.txt");

    stringstream sstr;

    string s, tmp;

    while (getline(fstr, s)) {
        sstr.str(s);

        while (sstr >> tmp) {
            cout << tmp << ' ';
        }
        cout << '\n';

        sstr.clear();
        tmp.clear();
    }
}
