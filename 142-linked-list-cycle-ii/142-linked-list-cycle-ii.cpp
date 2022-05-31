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
        if(!head){ return NULL; }
         ListNode *fast=head,*slow=head;
        bool flag=false;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            {
                flag=true;
                break;
            }
        }
        if(!flag){ return NULL;}
        ListNode * slow2=head;
        while(slow!=slow2)
        {
            slow2=slow2->next;
            slow=slow->next;
            
        }
        return slow2;
    }
};