#include <iostream>

#include <vector>

#include <string>

#include <fstream>

using namespace std;

int main()
{
    vector<string> vec;

    fstream fstr("test.txt");

    string s;

    while (getline(fstr, s)) {
        vec.push_back(s);
    }

    for (const auto& c : vec) {
        cout << c << '\n';
    }
}
