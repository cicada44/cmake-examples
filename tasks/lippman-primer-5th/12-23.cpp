#include <bits/stdc++.h>

using namespace std;

char* concat(const char s1[], const char s2[])
{
    char* res = new char[strlen(s1) + strlen(s2)];

    size_t actual_idx = 0;

    for (size_t i = 0; i != strlen(s1); ++i) {
        res[actual_idx] = s1[i];
        ++actual_idx;
    }

    // ++actual_idx;

    for (size_t i = 0; i != strlen(s2); ++i) {
        res[actual_idx] = s2[i];
        ++actual_idx;
    }

    return res;
}

int main()
{
    const char* s1 = new char[10]{'h', 'i'};
    // s1 = "hi";

    const char* s2 = new char[10];
    // s2 = "planet";

    char* res = concat(s1, s2);

    cout << res << '\n';

    delete[] res;
    delete[] s1;
    // delete[] s2;
}
