#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums)
    {
        vector<int> sol;
        for (auto x = nums.begin(); x != nums.end(); x++) {
            if (*x == *(x + 1)) {
                sol.push_back(*x);
                sol.push_back(*x + 1);
                break;
            }
        }
        return sol;
    }
};

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 6};

    Solution sol;
    sol.findErrorNums(v);

    return 0;
}