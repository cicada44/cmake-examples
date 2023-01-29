#include <iostream>

#include <string>

#include <map>

#include <vector>

using namespace std;

class Solution {
public:
    map<int, string> assoc
            = {{2, "abc"},
               {3, "def"},
               {4, "ghi"},
               {5, "jkl"},
               {6, "mno"},
               {7, "pqrs"},
               {8, "tuv"},
               {9, "wxyz"}};

    void
    helper(vector<string>& answer,
           int start_index,
           string& comb,
           string& digits)
    {
        if (digits.size() == start_index) {
            answer.push_back(comb);
            return;
        }

        string letters = assoc[digits[start_index] - '0'];

        for (const auto& c : letters) {
            comb.push_back(c);
            helper(answer, start_index + 1, comb, digits);
            comb.pop_back();
        }
    }

    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return {};

        vector<string> result;

        string s;

        helper(result, 0, s, digits);

        return result;
    }
};

int main()
{
    Solution sol;

    vector<string> ans = sol.letterCombinations("23");

    for (const auto& c : ans) {
        cout << c << '\n';
    }

    return 0;
}
