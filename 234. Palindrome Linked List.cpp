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
    ListNode* reverse(ListNode* head)
    {
        ListNode* pre = NULL;
        ListNode* post = NULL;
        while(head != NULL)
        {
            post = head->next;
            head->next = pre;
            pre = head;
            head = post;
        }
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL or head->next == NULL)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        
        //finding middle node
        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        //making the right half reverse
        slow->next = reverse(slow->next);//revere right half and getting pointer of first node in right half  
        //point first node right side
        slow = slow->next;
        
        while(slow != NULL)
        {
            if(head->val != slow->val)
            {
                return false;
            }
            head = head -> next;
            slow = slow ->next;
        }
        return true;
    }
};