// dvdf

#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string& s)
    {
        int rep_cnter = 0;
        vector<int> v{rep_cnter};

        auto beg = s.cbegin();
        for (auto x = s.cbegin(); x != s.cend(); ++x) {
            if (find(beg, x, *x) == x) {
                ++rep_cnter;
            } else {
                x = find(beg, x, *x) + 1;
                ++beg;
                v.push_back(rep_cnter);
                rep_cnter = 1;
            }
        }
        v.push_back(rep_cnter);
        return *(max_element(v.begin(), v.end()));
    }
};

int main()
{
    string s;
    cin >> s;
    Solution sol;

    cout << "\n" << sol.lengthOfLongestSubstring(s) << "\n";

    return 0;
}