#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int x = 0;
        for (; x < nums.size() && target > nums[x]; x++)
            ;
        return x;
    }
};

int main()
{
    return 0;
}
