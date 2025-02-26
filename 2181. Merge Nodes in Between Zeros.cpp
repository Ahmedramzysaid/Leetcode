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
    ListNode* mergeNodes(ListNode* head) {
       ListNode* ans =   new ListNode() ;
        ListNode* nx =   ans ;
       int sum = 0 ;
       ListNode* cur  = head ;
       
       while(cur)
       {
        if(cur-> val == 0)
        {
           
            if(sum != 0) {
                 ListNode* s =   new ListNode(sum) ;
                 nx-> next = s ; 
                 nx = s  ;
                 sum =0;
            }
        }
        else {
            sum+=cur->val ;
        }
        cur  = cur->next ;
       }
       return ans->next ;
    }  
};