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
         map <ListNode*,int> mp;
        ListNode *temp=head,*prev=NULL;
        while(temp)
        {
           if(mp.count(temp))
           {
               // cout<<"found";
               return temp;
           }
           mp[temp]++;
           prev=temp;
           temp=temp->next;
        }
        return temp;
    }
};