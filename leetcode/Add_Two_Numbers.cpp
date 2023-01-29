#include <iostream>

using namespace std;

//  * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr)
    {
    }
    ListNode(int x) : val(x), next(nullptr)
    {
    }
    ListNode(int x, ListNode* next) : val(x), next(next)
    {
    }
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
    }
};

int main()
{
    ListNode* list1 = new ListNode(9, new ListNode(4, new ListNode(2)));
    ListNode* list2 = new ListNode(7, new ListNode(8));

    Solution sol;

    ListNode* ans = sol.addTwoNumbers(list1, list2);

    while (ans != nullptr) {
        cout << ans->val << '\n';
        ans = ans->next;
    }

    return 0;
}
