#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x)
    {
        string num = to_string(x);
        long unsigned n = 0;
        auto beg = num.cbegin();
        auto end = num.crbegin();
        while (n != num.size() / 2) {
            if (*beg != *end)
                return 0;
            n++;
            beg++;
            end++;
        }
        return 1;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;

    cout << "sol - " << sol.isPalindrome(n) << "\n";

    return 0;
}