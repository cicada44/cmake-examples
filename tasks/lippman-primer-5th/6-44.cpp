#include <iostream>

#include <string>

using namespace std;

constexpr bool is_shorter(string& s1, string& s2)
{
    // can't call this (operator< is not constexpr)
    return s1 < s2;
}

int main()
{
    string s1 = "z";
    string s2 = "aaaaa";

    cout << "result - " << is_shorter(s1, s2) << '\n';
}
