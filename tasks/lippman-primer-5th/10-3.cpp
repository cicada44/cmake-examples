#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5};

    cout << "sum - " << accumulate(v.cbegin(), v.cend(), 0) << '\n';
}
