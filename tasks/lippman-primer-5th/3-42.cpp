#include <iostream>

#include <vector>

using namespace std;

int main()
{
    int arr[10] = {};

    vector<int> vec(std::begin(arr), std::end(arr));

    for (const auto& c : vec) {
        cout << c << ' ';
    }
}
