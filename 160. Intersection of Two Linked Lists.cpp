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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> track;
        
        while(headB != NULL)
        {
            track.insert(headB);
            headB = headB -> next;
        }
        
        while(headA != NULL)
        {
            if(track.find(headA) != track.end())
            {
                return headA;
            }
            headA = headA -> next;
        }
        return NULL;
    }
};