/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slowPtr, *fastPtr, *entryNode;
        slowPtr = fastPtr = entryNode = head;
        if(head == NULL || head->next == NULL) return NULL;
        while(fastPtr->next != NULL && fastPtr->next->next != NULL){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if(slowPtr == fastPtr){
                while(entryNode != slowPtr){
                    slowPtr = slowPtr->next;
                    entryNode = entryNode->next;
                }
                return slowPtr;
            }
        }
        return NULL;
    }
};
