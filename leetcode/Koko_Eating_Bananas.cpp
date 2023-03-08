#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
    int minEatingSpeed(const vector<int>& piles, int h)
    {
        if (piles.size() == 0 || h == 0)
            return 0;

        unsigned long long k
                = accumulate(piles.begin(), piles.end(), (unsigned long long)0)
                / h;
        unsigned long long sum = 0;
        unsigned long long k_sum = 0;

        do {
            k_sum = 0;
            for (auto i = piles.begin(); i != piles.end(); ++i) {
                sum = (*i / k) + ((*i % k != 0) ? 1 : 0);
                k_sum += sum;
                // cout << "sum - " << sum << '\n';
            }
            // cout << "k - " << k << '\t' << "k_sum - " << k_sum << '\n';
            ++k;
        } while (k_sum > h);

        return --k;
    }
};

int main()
{
    // cout << Solution().minEatingSpeed({3, 6, 7, 11}, 8) << '\n';
    // cout << Solution().minEatingSpeed({30, 11, 23, 4, 20}, 5) << '\n';
    // cout << Solution().minEatingSpeed({30, 11, 23, 4, 20}, 6) << '\n';
    // cout << Solution().minEatingSpeed({312884470}, 312884469) << '\n';
    // cout << Solution().minEatingSpeed({312884470}, 312884469) << '\n';
    cout << Solution().minEatingSpeed({}, 0) << '\n';
}
