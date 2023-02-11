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
        ListNode* answer = new ListNode();

        ListNode* dum = answer;

        int accum = 0;

        while (1) {
            if (l1 == nullptr && l2 == nullptr) {
                break;
            }

            if (l1 != nullptr) {
                answer->val += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                answer->val += l2->val;
                l2 = l2->next;
            }

            if (answer->val > 9) {
                answer->val %= 10;
                accum = 1;
            } else {
                accum = 0;
            }

            if (l1 != nullptr || l2 != nullptr || accum == 1) {
                answer->next = new ListNode(accum);
            }

            answer = answer->next;
        }

        return dum;
    }
};

int main()
{
    ListNode* list1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* list2 = new ListNode(5, new ListNode(6));

    Solution sol;

    ListNode* ans = sol.addTwoNumbers(list1, list2);

    while (ans != nullptr) {
        cout << ans->val << '\n';
        ans = ans->next;
    }

    return 0;
}
