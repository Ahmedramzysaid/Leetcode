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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head ;
        ListNode* cur =  head ; 
         if(!cur->next) return head ;
        ListNode* nx  =  head->next ;
        while(nx && cur)
        {
            swap(cur->val , nx->val) ;
             if(!nx) break ;
            nx  =  nx->next ;
            if(!nx) break ;
             nx  =  nx->next ;
              if(!cur) break ;
              cur  =  cur->next ;
               if(!cur) break ;
              cur  =  cur->next ;
        }
        return head ;
    }
};