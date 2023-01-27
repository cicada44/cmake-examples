#include <iostream>

#include <vector>

#include <iterator>

using namespace std;

// class Solution {
// public:
//     int maxArea(vector<int>& height)
//     {
//         int max = 0;
//         int count = 0;
//         int dist;

//         for (auto x = height.begin(); x != height.end(); ++x) {
//             for (auto i = x; i != height.end(); ++i) {
//                 dist = count * ((*x < *i) ? *x : *i);
//                 if (dist > max)
//                     max = dist;
//                 ++count;
//             }
//             count = 0;
//         }

//         return max;
//     }
// };

class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int count = height.size() - 1, amount = 0, m = 0;
        auto left = height.begin(), right = height.end() - 1;

        while (left < right) {
            amount = count * ((*left < *right) ? *left : *right);

            if (m < amount)
                m = amount;

            if (*left < *right) {
                ++left;
                --count;
            } else if (*right < *left) {
                --right;
                --count;
            } else {
                ++left;
                --right;
                count -= 2;
            }
        }
        return m;
    }
};

int main()
{
    vector<int> vec{1, 8, 6, 2, 5, 4, 8, 3, 7};

    Solution sol;

    cout << sol.maxArea(vec) << '\n';

    return 0;
}
