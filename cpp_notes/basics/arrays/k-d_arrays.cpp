#include <iostream>

#include <iterator>

#include <vector>

#include <algorithm>

using std::cout;
using std::vector;

void init()
{
    int arr2d[4][4] = {{1, 2}, {3, 4}, {5, 6}};

    for (int x = 0; x != 4; x++) {
        for (int i = 0; i != 4; i++) {
            cout << arr2d[x][i] << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    init();

    return 0;
}
