#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s)
    {
        stack<char> order;

        for (const auto& c : s) {
            if (c == '[')
                order.push(']');
            if (c == '{')
                order.push('}');
            if (c == '(')
                order.push(')');
            else if (order.empty() || order.top() != c)
                return 0;
            else
                order.pop();
        }
        return order.empty();
    }
};

int main()
{
    Solution sol;

    // cout << "valid - " << sol.isValid(string("((")) << '\n';

    int res = sol.isValid(string("[]{[([[}]])]}[]"));

    cout << "result - " << res << '\n';

    return 0;
}
