#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        size_t i = 0;
        for (; i < (*min_element(strs.begin(), strs.end())).size(); ++i)
            for (auto x = strs.cbegin(); x != strs.cend() - 1; ++x)
                if ((*x)[i] != (*(x + 1))[i])
                    return strs[0].substr(0, i);
        return strs[0].substr(0, i);
    }
};

int main()
{
    Solution sol;

    vector<string> v{"a"};

    cout << sol.longestCommonPrefix(v) << '\n';

    return 0;
}
