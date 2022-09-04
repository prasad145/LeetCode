/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slowPtr, *fastPtr;
        slowPtr = fastPtr = head;
        if(head == NULL)
        {
            return NULL;
        }
        while(true)
        {
            if(fastPtr == NULL || fastPtr->next == NULL)
            {
                    return slowPtr;
            }
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
    }
};
